;Svolgere in assembly le seguenti operazioni:
;- somma tra 71h e 1Ah
;- somma tra F0h e 32h
;- sottrazione tra 1200h e 77h
;- moltiplicazione tra 60h e 05h
;- divisione tra 7A7Ah e 32h
;- trasformazione del carattere '6' nel valore numerico 6



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
MOV		AL, 71h
ADD 	AL, 1Ah
;somma2
MOV		AL, 0F0h
MOV 	AH, 00h	
MOV		DL, 32h
MOV 	DH, 00h			
ADD		AX, DX
;sottrazione
MOV 	AX, 0000h
MOV		AX, 1200h
SUB 	AX, 77h
;moltiplicazione
MOV 	AX, 0060h
MOV 	DL, 05h
MUL 	DL           ;dl x al = ax
;divisione
MOV 	DX, 0000h
MOV 	AX, 7A7Ah
MOV 	BX, 32h
DIV     BX           ;ax / dl = risultato al resto ah  ;uso dx:ax per 32 bit perchè risultato non ci sta
;trasformazione
MOV 	AL, '6'
MOV 	AH, 00h
SUB 	AL, 30h      
;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END