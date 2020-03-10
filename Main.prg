// Autor:  Vikthor
// Fecha:  25/02/2020

#include "FiveWin.ch"
#include "wcolors.ch"
#include "treeview.ch"
//----------------------------------------------------------------------------//
static oWnd

FUNCTION Main()

   LOCAL oBar, oBar1, oBar2
   LOCAL cTitle, x
   LOCAL cFont   := "Arial Unicode MS"
   LOCAL cFontH  := -14
   LOCAL aFonts

   PUBLIC G_ADHOC  := 'ADHOC\'
   PUBLIC G_IDIOMA := 'ESPANOL\'
   PUBLIC G_MENUS  := 'MENUS\'
   PUBLIC G_SYSTEM := 'SYSTEM\'
   PUBLIC G_ROOT   := MiRuta()
   PUBLIC NO := .F.

//   FW_SetUnicode( .T. )
//   SetResDebug( .T. )

*  if !IsWin8() .and. !IsWindows10()
*     cFont   := "Calibri"
*  endif

  DEFINE FONT oFontMenu NAME cFont SIZE 0, -14 WEIGHT 300

  cTitle := "Titulo"

  DEFINE WINDOW oWnd FROM 3, 6 TO 20, 70 MDI ;
      TITLE cTitle MENU BWMENU('MAIN',.T.) COLOR CLR_WHITE, CLR_WHITE
  oWnd:SetFont( oFontMenu )

   SET MESSAGE OF oWnd TO "Test" FONT oFontMenu ;
       COLORS RGB( 10, 10, 10 ), CLR_WHITE ; 
       NOINSET CLOCK DATE KEYBOARD NOBORDER 2015

   ACTIVATE WINDOW oWnd MAXIMIZED

   //Hb_GCall(.t.)
   //CLEAR MEMORY

   While oFontMenu:nCount > 0
      oFontMenu:End()
   Enddo

   if File( "checkres.txt" )
      FErase( "checkres.txt" )
   endif
   CheckRes()

return nil

FUNCTION BWMENU( cMenu , lMain )


   LOCAL oMenu
   LOCAL cPath := G_IDIOMA + G_MENUS + cMenu 
   LOCAL cRoot := G_ROOT
   LOCAL oSubMenu
   LOCAL cAlias 
   DEFAULT lMain := .F.
   
   cPath += IF(lMain,'.MEN','.MNU')
   
   IF FILE( cRoot + G_ADHOC + cPath )
      cMenu := cRoot + G_ADHOC + cPath
   ELSEIF FILE( cRoot + cPath )
      cMenu := cRoot + cPath
   ELSE
*      MsgStop('No existe el Menu : ' + cMenu )
      RETURN Nil 
   ENDIF
   
   USE ( cMenu ) NEW VIA 'DBFNTX'
   cAlias := Alias()
   MENU oMenu ;
      FONT oFontMenu 2013 NOBORDER
      
      DO WHILE !EOF()
         cString  := OemToAnsi(Alltrim(M_OPCION))
         cProceso := OemToAnsi(Alltrim(UPPER(M_PROCESO)))
         cMensaje := OemToAnsi(Alltrim(UPPER(M_MENSAJE)))
         cCondi   := OemToAnsi(Alltrim(UPPER(M_CONDI)))
       IF !cCONDI$'.F.'
   
         IF "/"=cString
            SEPARATOR
            DbSkip(1) 
            LOOP
         ENDIF
         lSubMenu := "BWMENU"$UPPER(cProceso)
         IF lSubMenu
            MENUITEM cString
            &cProceso
         ELSE
            IF !EMPTY(cProceso)
               MenuAddItem( cString,cMensaje, .F.,, {|oMenuItem| &cProceso },,,,,,, .F.,,, .F., ,.F., .F.,,,,,,,,,, .F., .F.,,,,,,, ,, .F., .F., .F.,, )
            ENDIF
         ENDIF
       ENDIF  
         Select( cAlias )
         ( cAlias ) ->( DbSkip(1) )
      ENDDO
      ( cAlias ) ->( DbCloseArea() )
      IF lMain
         MENUITEM "Pruebas" ACTION CATALOGO( "SISTEMAS" )
         MENUITEM "Tree"    ACTION ChildTree(oWnd)

         oMenu:AddMdi()
         oMenu:AddHelp( "Pruebas Mostkoff", "(c) Corporativo Ortopédico Mostkoff" )
      ENDIF
   ENDMENU

RETURN oMenu

FUNCTION CATALOGO( cTable )
   LOCAL oWndChild,oBrowse
   LOCAL cPath := G_SYSTEM + cTable + '.DBF'
//   LOCAL cRoot := G_ROOT
   LOCAL cAlias
   LOCAL cFile := G_ROOT + cPath 
   
   LOCAL I_BASED := 'DATOSC\M_'
   
   cFile := G_ROOT + I_BASED + cTable + '.DBF'
   
   IF FILE( cFile )
      USE ( cFile ) NEW VIA 'DBFNTX'
      cAlias := Alias()
 
      DEFINE WINDOW oWndChild TITLE cAlias MDICHILD OF oWnd
      @ 0, 0 LISTBOX oBrowse FIELDS ALIAS cAlias SIZE 0, 0 OF oWndChild PIXEL
      oWndChild:setControl(oBrowse)
   
      ACTIVATE WINDOW oWndChild VALID ((cAlias)->(DbCloseArea()),.T.)
   ELSE
      MsgStop('No existe el archivo : '+cTable )
   ENDIF
RETURN NIL 

FUNCTION ISDOS()
RETURN( .F. )

FUNCTION CORRE( cString )
RETURN MsgInfo( cString )

FUNCTION File( cFile )
RETURN hb_vfExists( cFile )

FUNCTION ChildTree(oWnd)

   LOCAL oBarra
   LOCAL oChild
   LOCAL oTree

   DEFINE WINDOW oChild FROM 0,0 TO 400,600 PIXEL ;
          TITLE "Database" MDICHILD OF oWnd

/*
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
*/

   ACTIVATE WINDOW oChild ON INIT oTree := CreaTree(oChild)

RETURN NIL

FUNCTION CreaTree(oChild)

   LOCAL oTree
   LOCAL oRoot
   LOCAL oLink

   LOCAL nStep

   @ 0, 0 TREE oTree OF oChild SIZE 0, 0 PIXEL
//     BITMAPS { "Paper","FoldClose","FoldOpen", "BookClose", "BookOpen", "Tabla", "Procedimiento", "Usuario", "Server", "Ejecutivo", "Respaldo" } ;
//     TREE STYLE nOr( TVS_HASLINES, TVS_HASBUTTONS ) 
//     ON DBLCLICK ClickTree(oTree)

//   oTree:bRClicked = {|nRow,nCol| MenuTree(oTree,nRow,nCol)}

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

FUNCTION MIRUTA()
RETURN  cFilePath(GetModuleFileName( GetInstance() ) )