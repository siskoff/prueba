H:\Bcc7164\bin\ilink64.exe -Gn -aa -Tpe -s @h:\siskoff\corporativo\b32.bc > h:\siskoff\corporativo\link.log
IF ERRORLEVEL 1 GOTO LINKERROR
ECHO * Application successfully built * >> h:\siskoff\corporativo\link.log
GOTO EXIT
:LINKERROR
Echo Link Error >> h:\siskoff\corporativo\link.log
:EXIT
