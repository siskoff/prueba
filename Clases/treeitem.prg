#include "FiveWin.ch"

//----------------------------------------------------------------------------//

CLASS TTreeItem

   DATA   cPrompt
   DATA   iBmpOpen, iBmpClose
   DATA   Cargo

   METHOD New( cPrompt, iBmpOpen, iBmpClose ) CONSTRUCTOR

   METHOD SetText( cText ) INLINE ::cPrompt := cText
   METHOD GetText()	   INLINE ::cPrompt

ENDCLASS

//----------------------------------------------------------------------------//

METHOD New( cPrompt, iBmpOpen, iBmpClose ) CLASS TTreeItem

   ::cPrompt   = cPrompt
   ::iBmpOpen  = iBmpOpen
   ::iBmpClose = iBmpClose

return nil
