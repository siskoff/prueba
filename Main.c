/*
 * Harbour 3.2.0dev (r1704200801)
 * LLVM/Clang C 3.3.1 (35465.f352ad3.17344af) (64-bit)
 * Generated C source from "h:\source\Main.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC( MIRUTA );
HB_FUNC_EXTERN( TFONT );
HB_FUNC_EXTERN( TMDIFRAME );
HB_FUNC( BWMENU );
HB_FUNC_EXTERN( TMSGBAR );
HB_FUNC( FILE );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( CHECKRES );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( MENUBEGIN );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( OEMTOANSI );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( MENUADDITEM );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC( CATALOGO );
HB_FUNC( CHILDTREE );
HB_FUNC_EXTERN( MENUEND );
HB_FUNC_EXTERN( TMDICHILD );
HB_FUNC_EXTERN( TWBROWSE );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC( ISDOS );
HB_FUNC( CORRE );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( HB_VFEXISTS );
HB_FUNC( CREATREE );
HB_FUNC_EXTERN( TTREEVIEW );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( CFILEPATH );
HB_FUNC_EXTERN( GETMODULEFILENAME );
HB_FUNC_EXTERN( GETINSTANCE );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAIN )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "G_ADHOC", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "G_IDIOMA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "G_MENUS", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "G_SYSTEM", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "G_ROOT", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "MIRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MIRUTA )}, NULL },
{ "NO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFONT )}, NULL },
{ "OFONTMENU", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "TMDIFRAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMDIFRAME )}, NULL },
{ "BWMENU", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BWMENU )}, NULL },
{ "SETFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OMSGBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TMSGBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMSGBAR )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRESIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLBUTTONUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILE )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "CHECKRES", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHECKRES )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALIAS )}, NULL },
{ "MENUBEGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUBEGIN )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "OEMTOANSI", {HB_FS_PUBLIC}, {HB_FUNCNAME( OEMTOANSI )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_OPCION", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CSTRING", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "M_PROCESO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CPROCESO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "M_MENSAJE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CMENSAJE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "M_CONDI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CCONDI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "MENUADDITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUADDITEM )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "LSUBMENU", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "CATALOGO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CATALOGO )}, NULL },
{ "CHILDTREE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHILDTREE )}, NULL },
{ "ADDMDI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENUEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUEND )}, NULL },
{ "TMDICHILD", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMDICHILD )}, NULL },
{ "TWBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWBROWSE )}, NULL },
{ "SETCONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ISDOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISDOS )}, NULL },
{ "CORRE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CORRE )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "HB_VFEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFEXISTS )}, NULL },
{ "_BINIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATREE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CREATREE )}, NULL },
{ "TTREEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTREEVIEW )}, NULL },
{ "GETROOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDLASTCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "UPDATETV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFILEPATH", {HB_FS_PUBLIC}, {HB_FUNCNAME( CFILEPATH )}, NULL },
{ "GETMODULEFILENAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETMODULEFILENAME )}, NULL },
{ "GETINSTANCE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETINSTANCE )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MAIN, "h:\\source\\Main.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MAIN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MAIN )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,116,79,0,36,14,0,106,17,65,114,105,
		97,108,32,85,110,105,99,111,100,101,32,77,83,0,
		80,2,36,15,0,92,242,80,3,36,18,0,106,7,
		65,68,72,79,67,92,0,176,2,0,108,1,20,1,
		81,1,0,36,19,0,106,9,69,83,80,65,78,79,
		76,92,0,176,2,0,108,3,20,1,81,3,0,36,
		20,0,106,7,77,69,78,85,83,92,0,176,2,0,
		108,4,20,1,81,4,0,36,21,0,106,8,83,89,
		83,84,69,77,92,0,176,2,0,108,5,20,1,81,
		5,0,36,22,0,176,7,0,12,0,176,2,0,108,
		6,20,1,81,6,0,36,23,0,9,176,2,0,108,
		8,20,1,81,8,0,36,32,0,48,9,0,176,10,
		0,12,0,95,2,121,92,242,100,100,100,100,93,44,
		1,100,100,100,100,100,100,100,100,100,112,17,83,11,
		0,36,34,0,106,7,84,105,116,117,108,111,0,80,
		1,36,37,0,48,9,0,176,12,0,12,0,92,3,
		92,6,92,20,92,70,95,1,100,176,13,0,106,5,
		77,65,73,78,0,120,12,2,100,100,97,255,255,255,
		0,97,255,255,255,0,100,100,100,100,100,100,106,5,
		111,87,110,100,0,100,100,112,20,82,2,0,36,38,
		0,48,14,0,103,2,0,109,11,0,112,1,73,36,
		42,0,48,15,0,103,2,0,48,9,0,176,16,0,
		12,0,103,2,0,106,5,84,101,115,116,0,9,120,
		120,120,97,10,10,10,0,97,255,255,255,0,109,11,
		0,9,9,9,9,120,112,14,112,1,73,36,44,0,
		48,17,0,103,2,0,106,10,77,65,88,73,77,73,
		90,69,68,0,48,18,0,103,2,0,112,0,48,19,
		0,103,2,0,112,0,48,20,0,103,2,0,112,0,
		48,21,0,103,2,0,112,0,48,22,0,103,2,0,
		112,0,48,23,0,103,2,0,112,0,48,24,0,103,
		2,0,112,0,100,100,100,100,100,100,100,100,100,100,
		48,25,0,103,2,0,112,0,9,112,20,73,36,49,
		0,48,26,0,109,11,0,112,0,121,15,28,16,36,
		50,0,48,27,0,109,11,0,112,0,73,25,229,36,
		53,0,176,28,0,106,13,99,104,101,99,107,114,101,
		115,46,116,120,116,0,12,1,28,25,36,54,0,176,
		29,0,106,13,99,104,101,99,107,114,101,115,46,116,
		120,116,0,20,1,36,56,0,176,30,0,20,0,36,
		58,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BWMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,116,79,0,36,64,0,109,3,0,109,4,
		0,72,95,1,72,80,4,36,65,0,109,6,0,80,
		5,36,68,0,95,2,100,8,28,5,9,80,2,36,
		70,0,96,4,0,95,2,28,11,106,5,46,77,69,
		78,0,25,9,106,5,46,77,78,85,0,135,36,72,
		0,176,28,0,95,5,109,1,0,72,95,4,72,12,
		1,28,18,36,73,0,95,5,109,1,0,72,95,4,
		72,80,1,25,35,36,74,0,176,28,0,95,5,95,
		4,72,12,1,28,14,36,75,0,95,5,95,4,72,
		80,1,25,8,36,78,0,100,110,7,36,81,0,176,
		31,0,120,106,7,68,66,70,78,84,88,0,95,1,
		100,100,9,20,6,36,82,0,176,32,0,12,0,80,
		6,36,84,0,176,33,0,9,100,100,9,9,100,100,
		100,100,100,100,100,100,100,9,109,11,0,9,9,120,
		9,9,100,100,100,100,100,100,9,100,9,9,100,100,
		100,100,100,100,12,37,80,3,36,86,0,176,34,0,
		12,0,32,127,1,36,87,0,176,35,0,176,36,0,
		109,37,0,12,1,12,1,83,38,0,36,88,0,176,
		35,0,176,36,0,176,39,0,109,40,0,12,1,12,
		1,12,1,83,41,0,36,89,0,176,35,0,176,36,
		0,176,39,0,109,42,0,12,1,12,1,12,1,83,
		43,0,36,90,0,176,35,0,176,36,0,176,39,0,
		109,44,0,12,1,12,1,12,1,83,45,0,36,91,
		0,109,45,0,106,4,46,70,46,0,24,32,249,0,
		36,93,0,106,2,47,0,109,38,0,5,28,57,36,
		94,0,176,46,0,100,100,100,100,100,100,100,100,100,
		100,100,100,100,100,100,100,100,120,100,100,100,100,100,
		100,100,100,100,100,100,100,100,100,100,100,100,20,35,
		36,95,0,176,47,0,122,20,1,26,73,255,36,98,
		0,106,7,66,87,77,69,78,85,0,176,39,0,109,
		41,0,12,1,24,83,48,0,36,99,0,109,48,0,
		28,65,36,100,0,176,46,0,109,38,0,100,9,100,
		100,100,100,100,100,100,100,9,100,100,9,100,9,9,
		100,100,100,100,100,100,100,100,100,9,9,100,100,100,
		100,100,100,100,100,9,9,9,100,100,20,42,36,101,
		0,109,41,0,40,11,73,25,85,36,103,0,176,49,
		0,109,41,0,12,1,31,72,36,104,0,176,46,0,
		109,38,0,109,43,0,9,100,106,4,123,124,124,0,
		109,41,0,72,106,2,125,0,72,40,11,100,100,100,
		100,100,100,9,100,100,9,100,9,9,100,100,100,100,
		100,100,100,100,100,9,9,100,100,100,100,100,100,100,
		100,9,9,9,100,100,20,42,36,108,0,176,50,0,
		95,6,20,1,36,109,0,85,95,6,74,176,47,0,
		122,20,1,74,26,124,254,36,111,0,85,95,6,74,
		176,51,0,20,0,74,36,112,0,95,2,29,236,0,
		36,113,0,176,46,0,106,8,80,114,117,101,98,97,
		115,0,100,9,100,89,24,0,1,0,0,0,176,52,
		0,106,9,83,73,83,84,69,77,65,83,0,12,1,
		6,100,100,100,100,100,100,9,100,100,9,100,9,9,
		100,100,100,100,100,100,100,100,100,9,9,100,100,100,
		100,100,100,100,100,9,9,9,100,100,20,42,36,114,
		0,176,46,0,106,5,84,114,101,101,0,100,9,100,
		89,16,0,1,0,0,0,176,53,0,103,2,0,12,
		1,6,100,100,100,100,100,100,9,100,100,9,100,9,
		9,100,100,100,100,100,100,100,100,100,9,9,100,100,
		100,100,100,100,100,100,9,9,9,100,100,20,42,36,
		116,0,48,54,0,95,3,112,0,73,36,117,0,48,
		55,0,95,3,106,17,80,114,117,101,98,97,115,32,
		77,111,115,116,107,111,102,102,0,106,37,40,99,41,
		32,67,111,114,112,111,114,97,116,105,118,111,32,79,
		114,116,111,112,195,169,100,105,99,111,32,77,111,115,
		116,107,111,102,102,0,112,2,73,36,119,0,176,56,
		0,20,0,36,121,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CATALOGO )
{
	static const HB_BYTE pcode[] =
	{
		13,6,1,116,79,0,36,125,0,109,5,0,95,1,
		72,106,5,46,68,66,70,0,72,80,4,36,128,0,
		109,6,0,95,4,72,80,6,36,130,0,106,10,68,
		65,84,79,83,67,92,77,95,0,80,7,36,132,0,
		109,6,0,95,7,72,95,1,72,106,5,46,68,66,
		70,0,72,80,6,36,134,0,176,28,0,95,6,12,
		1,29,236,0,36,135,0,176,31,0,120,106,7,68,
		66,70,78,84,88,0,95,6,100,100,9,20,6,36,
		136,0,176,32,0,12,0,80,5,36,138,0,48,9,
		0,176,57,0,12,0,100,100,100,100,95,5,100,100,
		103,2,0,100,9,100,100,100,100,9,9,100,100,120,
		120,120,120,100,100,112,24,80,2,36,139,0,48,9,
		0,176,58,0,12,0,121,121,121,121,100,100,100,95,
		2,100,100,100,100,100,100,100,100,100,100,100,9,95,
		5,120,100,9,100,100,100,112,27,80,3,36,140,0,
		48,59,0,95,2,95,3,112,1,73,36,142,0,48,
		17,0,95,2,100,48,18,0,95,2,112,0,48,19,
		0,95,2,112,0,48,20,0,95,2,112,0,48,21,
		0,95,2,112,0,48,22,0,95,2,112,0,48,23,
		0,95,2,112,0,48,24,0,95,2,112,0,100,100,
		100,100,100,100,100,100,89,21,0,0,0,1,0,5,
		0,85,95,255,74,176,51,0,20,0,74,120,6,100,
		48,25,0,95,2,112,0,9,112,20,73,25,39,36,
		144,0,176,60,0,106,24,78,111,32,101,120,105,115,
		116,101,32,101,108,32,97,114,99,104,105,118,111,32,
		58,32,0,95,1,72,20,1,36,146,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISDOS )
{
	static const HB_BYTE pcode[] =
	{
		36,149,0,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CORRE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,152,0,176,63,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,155,0,176,64,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CHILDTREE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,164,0,48,9,0,176,57,0,12,0,
		121,121,93,144,1,93,88,2,106,9,68,97,116,97,
		98,97,115,101,0,100,100,95,1,100,9,100,100,100,
		100,120,9,100,100,120,120,120,120,100,100,112,24,80,
		2,36,188,0,48,17,0,95,2,100,48,18,0,95,
		2,112,0,48,19,0,95,2,112,0,48,20,0,95,
		2,112,0,48,21,0,95,2,112,0,48,22,0,95,
		2,112,0,48,23,0,95,2,112,0,48,65,0,95,
		2,89,22,0,1,0,2,0,2,0,3,0,176,66,
		0,95,255,12,1,165,80,254,6,112,1,100,100,100,
		100,100,100,100,100,100,100,48,25,0,95,2,112,0,
		9,112,20,73,36,190,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CREATREE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,200,0,48,9,0,176,67,0,12,0,
		121,121,121,121,95,1,100,100,100,100,100,100,100,100,
		100,100,100,120,100,112,18,80,2,36,207,0,48,59,
		0,95,1,95,2,112,1,73,36,209,0,48,68,0,
		95,2,112,0,80,3,36,211,0,48,69,0,95,3,
		106,9,83,101,114,118,105,100,111,114,0,92,9,92,
		9,112,3,80,3,36,213,0,48,69,0,95,3,106,
		10,69,106,101,99,117,116,105,118,111,0,121,92,10,
		112,3,73,36,215,0,48,69,0,95,3,106,7,84,
		97,98,108,97,115,0,92,3,92,2,112,3,80,4,
		36,216,0,122,165,80,5,25,44,36,217,0,48,69,
		0,95,4,106,7,84,97,98,108,97,95,0,176,70,
		0,176,71,0,95,5,12,1,12,1,72,121,92,6,
		112,3,73,36,216,0,175,5,0,92,10,15,28,211,
		36,220,0,48,69,0,95,3,106,27,80,114,111,99,
		101,100,105,109,105,101,110,116,111,115,32,97,108,109,
		97,99,101,110,97,100,111,115,0,92,3,92,2,112,
		3,80,4,36,221,0,122,165,80,5,25,48,36,222,
		0,48,69,0,95,4,106,11,80,114,111,99,101,100,
		117,114,101,95,0,176,70,0,176,71,0,95,5,12,
		1,12,1,72,121,92,7,112,3,73,36,221,0,175,
		5,0,92,30,15,28,207,36,225,0,48,69,0,95,
		3,106,9,85,115,117,97,114,105,111,115,0,92,3,
		92,2,112,3,80,4,36,226,0,122,165,80,5,25,
		46,36,227,0,48,69,0,95,4,106,9,85,115,117,
		97,114,105,111,95,0,176,70,0,176,71,0,95,5,
		12,1,12,1,72,121,92,8,112,3,73,36,226,0,
		175,5,0,92,5,15,28,209,36,230,0,48,69,0,
		95,3,106,10,82,101,115,112,97,108,100,111,115,0,
		92,3,92,2,112,3,80,4,36,231,0,48,69,0,
		95,4,106,20,82,101,115,112,97,108,100,111,32,100,
		101,32,101,106,101,109,112,108,111,0,121,92,11,112,
		3,73,36,233,0,48,72,0,95,2,112,0,73,36,
		235,0,48,73,0,95,2,112,0,73,36,237,0,95,
		2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MIRUTA )
{
	static const HB_BYTE pcode[] =
	{
		36,240,0,176,74,0,176,75,0,176,76,0,12,0,
		12,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,79,0,2,0,116,79,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

