#include "FiveWin.ch"

//----------------------------------------------------------------------------//

CLASS TVItem

   DATA   cPrompt
   DATA   iBmpOpen, iBmpClose
   DATA   Cargo

   METHOD New( cPrompt, iBmpOpen, iBmpClose ) CONSTRUCTOR

   METHOD SetText( cText ) INLINE ::cPrompt := AllTrim( cText )
   METHOD GetText()	   INLINE ::cPrompt

ENDCLASS

//----------------------------------------------------------------------------//

METHOD New( cPrompt, iBmpOpen, iBmpClose ) CLASS TVItem

 DEFAULT iBmpOpen := 0, iBmpClose := 0

   ::cPrompt   = cPrompt
   ::iBmpOpen  = iBmpOpen
   ::iBmpClose = iBmpClose

return nil
