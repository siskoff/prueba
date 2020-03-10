H:\Harbour\bcc64\bin\harbour %1 /iH:\Harbour\bcc64\include;H:\fwh641702\include;H:\fwh641702\include; /n /p /a /w0 /oH:\Source\Tvitem.c >>H:\Source\comp1.log 2>>H:\Source\comp2.log
if errorlevel 0 H:\Bcc7164\bin\bcc64.exe -c -IH:\Harbour\bcc64\include -nH:\Source -oh:\source\Tvitem.o H:\Source\Tvitem.c >>H:\Source\comp1.log
