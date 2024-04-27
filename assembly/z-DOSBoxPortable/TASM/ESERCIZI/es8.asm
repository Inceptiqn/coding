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

;es.1
            MOV CX, 04h
c1_while:   DEC CX
            CMP CX, 00h
            JA c1_while

;es.2
            MOV CX, 08h                                                                                                                                                                                                                                                                                 .,.,.
c2_while:   DEC CX
            CMP CX, 04h
            JA c1_while

;es.3
            MOV AX, 01h
            MOV CL, 02h
c3_for:     ADD CL, 02h
            ADD AX, 03
            CMP CL, 09h
            JB c3_for

;es.4
            MOV CX, 04h
c4_for:     INC AX
            CMP CX, 00h
            DEC CX

;es.5
            MOV CX, 0Ah
            MOV AL, 02h
            MOV BL, 02h
c5_while:   MUL BL
            INC BL
            DEC CX
            CMP CX, 05h
            JA c5_while

;es.6
            MOV AX, 07h
            MOV BX, 02h
            MOV CX, 05h
c6_while:   CMP CX, BX
            JB c6_continua2
            CMP CX, AX
            JB c6_if 
c6_else:    INC BX
            JMP c6_continua
c6_if:      DEC AX
c6_continua:JMP c6_while
c6_continua2:

;es.7
            MOV BX, 05h
            MOV AX, 02h
            ADD AX, AX
            CMP BX, AX
            JA c7_if
            JMP c7_continua
c7_if:      MOV CX, 05h
c7_ciclo:   INC AX
            DEC CX
            CMP CX, 00h
            JA c7_ciclo
c7_continua:

;es.8
            MOV CX, 05h
c8_ciclo:   MOV AX, CX
c8_while:   DEC AX
            CMP AX, 00h            
            JA c8_while
            DEC CX
            CMP CX, 00h
            JA c8_ciclo

;es.9
            MOV AX, 05h
c9_ciclo:   MOV CX, AX
c9_while:   DEC CX
            CMP CX, 00h
            JA c9_while
            DEC AX 
            CMP AX, 00h
            JA c9_ciclo

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END


