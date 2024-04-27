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


;formato delle istruzioni:
;[etichetta] 	istruzione 		[operando/i] 	;commento
lbl1: 			MOV 			AL, 03h			;esempio di istruzione

;es.1
MOV CL, 22h      ;assegna valore ad un registro
ADD CX, 00DDh    ;aggiunge, risultato in CX
;es.2
MOV CL, 0FFh
SUB CL, 23h      ;sottrae 23h a CL, risultato in CL
;es.3
MOV CX, 1000
MOV AX, 899
MUL CX           ;moltiplica CX * AX, risultato in DX:AX
;es.4
MOV DX, 0006h
MOV AX, 0076h    ;DX:AX = 60076h
MOV CX, 0213h   
DIV CX           ;divide DX:AX/CX, quoziente in AX e resto in DX
;es.5
MOV AX, 0CBCh     
MOV DL, 34h
DIV DL           ;divide  AX/DL, quoziente in AL e resto in AH
;es.6 
MOV DL, 15h
MOV CL, 85h
ADD DL, CL
MOV AX, 0999h
DIV DL
;es.7
MOV DL, 2Eh
MOV AL, 0E1h
MUL DL
MOV BX, AX       ;copia risultato in BX
MOV DL, 0C0h
MOV AL, 05h
MUL DL           ;risultato in AX
ADD AX, BX
ADD AX, 0003h
;es.8
MOV AL, 32h
MOV DL, 14h
MUL DL           ;risultato in AX
ADD AX, 00EEh    
MOV BX, AX       ;copio in BX
MOV AL, 2Dh
MOV DL, 0EBh
MUL DL           ;rissultato in AX
SUB AX, 0090h    
MUL BX


;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END