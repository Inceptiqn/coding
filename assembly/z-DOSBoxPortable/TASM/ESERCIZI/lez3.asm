;controllo del flusso: salti condizionati e incondizionati

TITLE salti

.MODEL SMALL

.STACK

.DATA

var1 	DB		03h

.CODE

.STARTUP


;CMP confronta tra loro due operandi
;il confronto avviene mediante una sottrazione, di cui non viene memorizzato il risultato. vengono però alterati i flag. In particolare:
;ZF = 0 quando i due operandi sono diversi (op1 <> op2)
;ZF = 1 quando i due operandi sono uguali (op1 = op2)
;CF = 0 quando op1 >= op2
;CF = 1 quando op1 < op2

;esempi:

MOV AL, 03h

MOV DL, 03h
CMP AL,DL		;setta ZF=1, i due operandi sono uguali

MOV DL, 04h
CMP AL,DL		;setta ZF=0 e CF=1, op1 < op2

MOV DL, 02h
CMP AL,DL		;setta ZF=0 e CF=0, op1 > op2

CMP DL, 03h

CMP AL, var1

LEA SI, var1
CMP DL, [SI]


;i salti possono essere:
;condizionati (verificano un determinato flag ed in base al suo stato saltano o meno all'etichetta indicata)
;incondizionati (saltano all'etichetta indicata in qualsiasi caso)
;il salto avviene copiando nel registro IP l'indirizzo corrispondente all'etichetta


;JMP salto incondizionato all'etichetta specificata

salto1: MOV AL, 08h
		INC AL
;		JMP salto1 		;ciclo infinito!
		

;J salto condizionato a seconda dell'esito della condizione: se la condizione è soddisfatta, salta all'etichetta, altrimenti prosegue
;esempi di possibili condizioni (altri sul libro):
;JE 	(jump if equal: salta se ZF=1, cioè op1=op2)
;JNE	(jump if not equal: salta se ZF=0, cioè se sono diversi)
;JA 	(jump if above: salta se op1>op2)
;JAE	(jump if above or equal: salta se op1>=op2)
;JB		(jump if below: salta se op1<op2)
;JBE	(jump if below or equal: salta se op1<=op2)

		MOV AL, 22h
salto2: ADD AL, 02h
		CMP AL, 28h
		JNE salto2
		MOV AL, 00h
		
		
;LOOP ad ogni istruzione LOOP viene decrementato CX: se CX è diverso da zero salta all'etichetta, altrimenti prosegue

		MOV CX, 0004h
		MOV AX, 0000h
salto3:	INC AX
		LOOP salto3




;se AX e BX sono uguali, setta CX a 0, altrimenti setta CX a 1
;struttura IF
			CMP AX, BX
			JE c1_if
c1_else:	MOV CX, 0001h
			JMP continua1
c1_if:		MOV CX, 0000h
continua1:;.................

;se CX è maggiore o uguale a 0, setta ax=cx, altrimenti non fare niente

			CMP CX, 0h
			JAE c2_if
c2_else:	JMP continua2
c2_if:		MOV AX, CX
continua2:;.................

;chiusura del programma
MOV     AH,4CH 			;Pone fine al processo in atto
INT     21H 			;tornando al prompt del DOS 
END


