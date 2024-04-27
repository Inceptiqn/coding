;Svolgere le seguenti operazioni (un unico file es2.asm):
;- fare la somma tra 37h e 45h utilizzando meno spazio possibile nei registri;
;- fare la somma tra 77h e 90h utilizzando meno spazio possibile nei registri;
;- fare la differenza tra 100 e 12h utilizzando meno spazio possibile nei registri (attenti!);
;- fare la moltiplicazione tra 45h e 12h usando il registro DH per uno degli operandi;
;- fare la divisione tra 300h e 10h utilizzando meno spazio possibile;
;- risolvere la seguente espressione: (20h+7h)*0Ah-14h



;template base di un generico programma utilizzando le direttive semplificate
TITLE template

;identifica le dimensioni dei segmenti ed il tipo di salti consentiti
;SMALL separa i segmenti dati e codice, e consente salti solo nel segmento di codice
.MODEL SMALL

;stack segment
.STACK

;data segment
.DATA
;qui vanno le istruzioni del segmento dei dati (es dichiarazione di una variabile)

;code segment
.CODE  
;qui va il codice che non viene automaticamente eseguito allo startup (es procedure)
.STARTUP
;qui va il codice eseguito all'avvio del programma

;somma1
MOV AL, 37h
ADD AL, 45h
;somma2
MOV AX, 0077h
ADD AX, 0090h
;diff1
MOV AL, 100
SUB AL, 12h
;multi
MOV AX, 0045h
MOV DH, 12h
MUL DH
;division
MOV AX, 0300h
MOV DL, 10h
DIV DL
;equazione
MOV AL, 20h
ADD AX, 0007h
MOV DL, 0Ah
MUL DL
SUB AX, 14h

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END