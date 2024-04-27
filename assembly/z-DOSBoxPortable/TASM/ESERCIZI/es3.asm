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

;divisione
MOV DX, 0007h
MOV AX, 0000h
MOV BX, 0700h
DIV BX       ;ax Risultato dx resto
;moltiplicazione
MOV AX, 300h
MOV DX, 20h
MUL DX
;moltiplicazione
MOV AL, 110
MOV DL, 120
MUL DL
;divisione
MOV AX, 10000
MOV DL, 100
DIV DL
;es.5
MOV AX, 0013h
ADD AX, 0300h
MOV DX, 0012h
MUL DX
;es.6
MOV AX, 0300h
SUB AX, 0250h
MOV DL, 20h
MUL DL
;es.7
MOV AX, 0450h
SUB AX, 400h
MOV DX, 260h
SUB DX, 180h
MUL DL
;es.8
MOV AL, 20h
MOV DL, 05h
MUL DL
MOV BX, AX
MOV AL, 07h
MOV DL, 23h
MUL DL
ADD BX, AX
;es.9
MOV AX, 0300h
MOV DL, 30h
DIV DL          ;risultato in al e resto in ah
MOV DL, 06h
MUL DL
;es.10
MOV AX, 0400h
MOV DL, 20h
DIV DL
MOV BL, DL
MOV AX, 0300h
MOV DL, 10h
DIV DL
ADD DL, BL

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END