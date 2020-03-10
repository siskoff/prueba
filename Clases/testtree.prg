#include "fivewin.ch"
#include "treeview.ch"

/* Usando TREES para Antonio Linares

   Libreria original de Savkic Goran <savgoran@EUnet.yu>

   Yo solo modifiqu‚ treedraw.c y agregue setmask.c para usar solo
   un bitmap y no un bitmap m s una mascara como estaba en la versi¢n
   original. Tambi‚n arregle algunos aspectos de las lineas del tree.

   Este ejemplo permite agregar menus y eventos del mouse, no est n
   propiamente incluidos en la clase si no que est n en la aplicaci¢n

   OJO: Muy importante, la clase TTreeView tiene incorporada una funcion
   hecha en C llamada SetMasked que deja los bitmap con el fondo de color
   de la p gina una sola vez (Tambi‚n es muy util para otras clases como
   Bar, Wtbrowse, etc). Sin embargo, si el recurso solicitado no existe
   la aplicaci¢n queda pegada. Esto yo creo que seria facil de arreglar pues
   seguramente la funci¢n

   SetMasked( ::aBitmaps[n], nClrPane )

   podria no hacer nada si ::aBitmaps[n] = 0

   Saludos Antonio

*/

STATIC oWnd

FUNCTION Main()

   LOCAL oBarra

   SET RESOURCES TO "TestTree.dll"

   DEFINE WINDOW oWnd FROM 0,0 TO 400,600 PIXEL ;
          TITLE "Trees 1.0" MDI

       DEFINE BUTTONBAR oBarra OF oWnd SIZE 30,30 _3D

       DEFINE BUTTON RESOURCE "Database","Database_m" OF oBarra ;
              MESSAGE "Trabajar con bases de datos ..." ACTION ChildTree() ;
              NOBORDER TOOLTIP "Trabajar con bases de datos ..."

       SET MESSAGE OF oWnd KEYBOARD NOINSET

       ACTIVATE WINDOW oWnd

RETURN nil

FUNCTION ChildTree()

   LOCAL oBarra
   LOCAL oChild
   LOCAL oTree

   DEFINE WINDOW oChild FROM 0,0 TO 400,600 PIXEL ;
          TITLE "Database" MDICHILD ICON "Database"

   DEFINE BUTTONBAR oBarra OF oChild SIZE 28,29 _3D

   DEFINE BUTTON RESOURCE "Actualizar" OF oBarra ;
          MESSAGE "Actualizar base de datos ..." ACTION ( oTree:End(),;
          oChild:Refresh(.T.) ,;
          oTree := CreaTree(oChild) ) ;
          NOBORDER TOOLTIP "Actualizar base de datos ..."

   DEFINE BUTTON RESOURCE "Color" OF oBarra GROUP ;
          MESSAGE "Selecciona color ..." ACTION oTree:SelColor();
          NOBORDER TOOLTIP "Selecciona color ..."

   DEFINE BUTTON RESOURCE "Tipos" OF oBarra ;
          MESSAGE "Selecciona tipo de letra ..." ACTION oTree:Selfont() ;
          NOBORDER TOOLTIP "Selecciona tipo de letra ..."


   SET MESSAGE OF oChild NOINSET
   DEFINE MSGITEM OF oChild:oMsgBar PROMPT "Child tree creado a las " + TIME() SIZE 150


   ACTIVATE WINDOW oChild ON INIT oTree := CreaTree(oChild)

RETURN NIL

FUNCTION CreaTree(oChild)

   LOCAL oTree
   LOCAL oRoot
   LOCAL oLink

   LOCAL nStep

   @ 0, 0 TREE oTree OF oChild ;
     SIZE 0, 0 PIXEL ;
     BITMAPS { "Paper","FoldClose","FoldOpen", "BookClose", "BookOpen", "Tabla", "Procedimiento", "Usuario", "Server", "Ejecutivo", "Respaldo" } ;
     TREE STYLE nOr( TVS_HASLINES, TVS_HASBUTTONS ) ;
     ON DBLCLICK ClickTree(oTree)

   oTree:bRClicked = {|nRow,nCol| MenuTree(oTree,nRow,nCol)}

   oChild:SetControl(oTree)

   oRoot := oTree:GetRoot()

   oRoot := oRoot:AddLastChild( "Servidor", 9, 9 )

   oRoot:AddLastChild( "Ejecutivo", 0, 10 )

   oLink := oRoot:AddLastChild( "Tablas", 3, 2 )
   FOR nStep = 1 TO 10
       oLink:AddLastChild( "Tabla_" + LTRIM(STR(nStep)) , 0, 6 )
   NEXT

   oLink := oRoot:AddLastChild( "Procedimientos almacenados", 3, 2 )
   FOR nStep = 1 TO 30
       oLink:AddLastChild( "Procedure_" + LTRIM(STR(nStep)) , 0, 7 )
   NEXT

   oLink := oRoot:AddLastChild( "Usuarios", 3, 2 )
   FOR nStep = 1 TO 5
       oLink:AddLastChild( "Usuario_" + LTRIM(STR(nStep)) , 0, 8 )
   NEXT

   oLink := oRoot:AddLastChild( "Respaldos", 3, 2 )
   oLink:AddLastChild("Respaldo de ejemplo",0,11)

   oTree:UpdateTV()

   oTree:SetFocus()

RETURN oTree

FUNCTION MenuTree( oTree, nRow, nCol )


   LOCAL nIndex  := oTree:GetCursel()
   LOCAL oLink := oTree:GetLinkAt( nIndex )
   LOCAL cPrompt := oLink:TreeItem:cPrompt
   LOCAL cParent
   LOCAL oMenu

   MENU oMenu POPUP

       DO CASE

          CASE cPrompt = "Servidor"
          CASE cPrompt = "Tablas"
               IF "oTabla" = "nil"
                  MENUITEM "Nueva" ACTION MsgInfo("oTabla := Tablas()") ;
                           RESOURCE "Crear" ;
                           MESSAGE "Edici¢n de las tablas ..."
               ELSE
                  MENUITEM "Edicion" ACTION MsgInfo("oTabla:SetFocus()") ;
                           RESOURCE "Estructura" ;
                           MESSAGE "Crear tabla ..."
               ENDIF
               SEPARATOR
               MENUITEM "Indices" ACTION MsgInfo("Indexs()");
                        MESSAGE "Indices ..."
               MENUITEM "Disparadores (Triggers)" ;
                        MESSAGE "Disparadores ..."
               SEPARATOR
               MENUITEM "Generar secuencia de comandos (Scripts)" ACTION MsgInfo("Scripts()") ;
                        MESSAGE "Generar secuencia de comandos ..."
          CASE cPrompt = "Procedimientos almacenados"
               IF "oProcedure" = "nil"
                  MENUITEM "Nuevo" ACTION MsgInfo("oProcedure := Procedimientos()") ;
                           RESOURCE "Crear" ;
                           MESSAGE "Crear procedimientos ..."
               ELSE
                  MENUITEM "Edicion" ACTION MsgInfo("oProcedure:SetFocus()") ;
                           RESOURCE "Editar" ;
                           MESSAGE "Edici¢n de los procedimientos ..."
               ENDIF
               SEPARATOR
               MENUITEM "Generar secuencia de comandos (Scripts)"  ACTION MsgInfo("Scripts()") ;
                        MESSAGE "Generar secuencia de comandos ..."
          CASE cPrompt = "Usuarios"
               MENUITEM "Nuevo" ;
                        RESOURCE "Crear" ;
                        MESSAGE "Crear usuario ..."

          CASE cPrompt = "Respaldos"
               MENUITEM "Nuevo" ;
                        RESOURCE "Crear" ;
                        MESSAGE "Crear respaldo ..."

          OTHERWISE

               cParent = oLink:ParentLink:TreeItem:cPrompt
               
               DO CASE
                  CASE cParent = "Tablas"
                       MENUITEM "Nueva" ;
                                RESOURCE "Crear" ;
                                MESSAGE "Crear tabla ..."
                       MENUITEM "Editar" ACTION MsgInfo("IF( oTabla != nil ...") ;
                                RESOURCE "Editar" ;
                                MESSAGE "Editar tabla ..."
                       MENUITEM "Eliminar (Drop)" ;
                                RESOURCE "Borrar" ;
                                MESSAGE "Eliminar tabla ..." ;
                                ACTION MsgInfo("IF( ...")
                       SEPARATOR
                       MENUITEM "Editor de datos" ACTION MsgInfo("Datos(cPrompt)") ;
                                RESOURCE "Datos" ;
                                MESSAGE "Editar datos de tabla ..."
                       SEPARATOR
                       MENUITEM "Renombrar" ;
                                MESSAGE "Renombrar tabla ..."
                       SEPARATOR
                       MENUITEM "Indices" ACTION MsgInfo("Indexs(cPrompt)");
                                MESSAGE "Indices ..."
                       MENUITEM "Disparadores (Triggers)" ;
                                MESSAGE "Disparadores ..."
                       SEPARATOR
                       MENUITEM "Generar secuencia de comandos (Scripts)" ACTION MsgInfo("Scripts(cPrompt)");
                                MESSAGE "Generar secuencia de comandos ..."
                  CASE cParent = "Procedimientos almacenados"
                       MENUITEM "Nuevo" ;
                                RESOURCE "Crear" ;
                                MESSAGE "Crear procedimiento ..."
                       MENUITEM "Editar" ;
                                RESOURCE "Editar" ;
                                MESSAGE "Editar procedimiento ..."
                       MENUITEM "Eliminar (Drop)" ;
                                RESOURCE "Borrar" ;
                                MESSAGE "Eliminar procedimiento ..." ;
                                ACTION MsgInfo("IF( ....")
                       SEPARATOR
                       MENUITEM "Renombrar" ;
                                MESSAGE "Renombrar procedimiento ..."
                       SEPARATOR
                       MENUITEM "Generar secuencia de comandos (Scripts)" ACTION MsgInfo("Scripts(cPrompt)") ;
                                MESSAGE "Generar secuencia de comandos ..."
                  CASE cParent = "Usuarios"
                       MENUITEM "Nuevo" ;
                                RESOURCE "Crear" ;
                                MESSAGE "Crear usuario ..."
                       MENUITEM "Editar" ;
                                RESOURCE "Editar" ;
                                MESSAGE "Editar usuario ..."
                       MENUITEM "Eliminar (Drop)" ;
                                RESOURCE "Borrar" ;
                                MESSAGE "Eliminar usuario ..."
               ENDCASE
               
       ENDCASE
       
   ENDMENU

   ACTIVATE POPUP oMenu AT nRow,nCol OF oTree:oWnd
   
RETURN nil

FUNCTION ClickTree( oTree )

   LOCAL oLink := oTree:GetLinkAt( oTree:GetCursel() )
   LOCAL cPrompt := oLink:TreeItem:cPrompt
   LOCAL cParent

   IF AT( cPrompt , "Servidor" + ;
         "Ejecutivo" + ;
         "Tablas" + ;
         "Procedimientos almacenados" + ;
         "Usuarios" + ;
         "Respaldos" ) > 0

   ELSE

      cParent = oLink:ParentLink:TreeItem:cPrompt

      DO CASE
         CASE cParent = "Tablas"
              MsgInfo("IF oTabla != nil")
         CASE cParent = "Procedimientos almacenados"
              MsgInfo("IF oProcedure != nil")
         CASE cParent = "Usuarios"
              //IF oProcedure != nil
              //   oProcedure:SetFocus()
              //ELSE
              //   oProcedure := Procedimientos(cPrompt)
              //ENDIF
      ENDCASE

   ENDIF

RETURN nil


