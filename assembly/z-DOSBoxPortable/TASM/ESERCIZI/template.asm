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


;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END


