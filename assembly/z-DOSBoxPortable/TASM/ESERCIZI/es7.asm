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

;es1
            MOV AH, 08h   
            MOV AL, 03h
            CMP AH, AL
            JE c1_if
c1_else:    MOV AL, AH
            JMP continua1
c1_if:      MOV AX, 0000h
continua1:  

;es2
            MOV AL, 08h   
            MOV BL, 03h
            CMP AL, BL
            JA c2_copia1
c2_copia2:  MOV CL, BL
            JMP continua2
c2_copia1:  MOV CL, AL 
continua2:

;es3
            MOV AX, 0003h
            CMP AX, 0000h
            JE c3_if
c3_else:    JMP continua3
c3_if:      INC AX
continua3:

;es4
            MOV AX, 0015h
c4_ciclo:   INC AX
            CMP AX, 1Ch
            JNE c4_ciclo

;es5
            MOV AX, 001Ah
            MOV CX, 0005h
c5_salto:   ADD AX, AX
            LOOP c5_salto

;es6
            MOV CX, 0000h
c6_ciclo:   CMP CX, 0010h
            INC CX
            JB c6_ciclo
;es7
            MOV CL, 0003h
            MOV AX, 0000h
c7_ciclo:   ADD CL, 03h
            CMP CL, 09h
            ADD AX, 02h
            JB c7_ciclo

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END