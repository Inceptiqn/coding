;comandi per le operazioni aritmetiche (con indirizzamenti immediati e a registro)

TITLE operazioni
.MODEL SMALL

.STACK

.DATA

.CODE

.STARTUP

;MOV copia l'operando di destra nell'operando di sinistra 	
	
MOV 	AL, 03h			;copia il valore 03h (3 in esadecimale) nel registro AL
MOV 	AL, 11 			;copia il valore 11 (decimale) nel registro AL
MOV 	AL, '9'			;copia il valore ASCII corrispondente al carattere 9 in AL
MOV		AH, 10h			;copia il valore 10h (16 in esadecimale) nel registro AH
MOV 	AX, 1210h		;copia il valore 1010h nel registro AX
MOV		DX, AX 			;copia il valore contenuto in AX in DX


;INC somma la costante implicita 1 all'operando

INC 	DX 				;incrementa DX di 1


;DEC sottrae la costante implicita 1 all'operando

DEC 	DX 				;decrementa DX di 1


;ADD somma il secondo operando al primo, lasciando il risultato nel primo (accumulo)

ADD 	AX, 03h			;somma 03h ad AX (risultato in AX)
ADD 	DX, AX			;somma AX a DX (risultato in DX)

;esempio di somma di due numeri a 8 bit: 05h e FFh
MOV		AL, 03h
MOV 	AH, 00h			;azzero la parte alta del registro
MOV		DL, 0FFh
MOV 	DH, 00h			;azzero la parte alta del registro
ADD		AX, DX


;SUB sottrae il secondo operando al primo, lasciando il risultato nel primo

SUB 	AX, 03h			;sottrae 03h ad AX (risultato in AX)

;esempio: trasformo un carattere ascii di una cifra nel corrispettivo numero 

MOV 	AX, 0000h		;alternativa per azzerare il registro
MOV 	AL, '9'
SUB 	AL, 30h			;si può passare da ascii a numero corrispondente sottraendo 30h


;DIV divisione (senza segno) un determinato numero per l'operando
;se l'operando è a 8 bit divide il numero a 16 bit AX. Il quoziente viene collocato in AL, il resto in AH
;se l'operando è a 16 bit divide il numero a 32 bit formato da DX:AX. Il quoziente viene collocato in AX, il resto in DX

MOV 	AX, 0007h
MOV 	DL, 02h
DIV		DL				;l'operando è a 8bit, divide AX per DL

MOV 	AX, 8000h
MOV 	DX, 0008h
MOV 	BX, 4000h
DIV 	BX				;l'operando è a 16bit, divide DX:AX per BX


;MUL moltiplica (senza segno) un determinato numero per l'operando
;se l'operando è a 8 bit moltiplica per AL. Il risultato va in AX
;se l'operando è a 16 bit moltiplica per AX. Il risultato va in DX:AX

MOV 	AX, 0101h
MOV 	DL, 02h
MUL 	DL 				;l'operando è a 8bit, moltiplica AL per DL

MOV 	DX, 0200h
MUL 	DX 				;l'operando è a 16bit, moltiplica AX per DX



;chiusura del programma
MOV     AH,4CH 			;Pone fine al processo in atto
INT     21H 			;tornando al prompt del DOS 
END


