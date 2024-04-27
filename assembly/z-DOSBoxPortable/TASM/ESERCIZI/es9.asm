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
            CMP AL,BL
            JA c1_if
            MOV AL, 00h
            MOV BL, 00h
            JMP c1_continua
c1_if:      MUL BL
c1_continua:

;es.2
            CMP BX, 00h
            JE c2_continua
            DIV BX
c2_continua:

;es.3
            JMP c3_continua
c3_while:   MOV AX, AX
c3_continua:CMP AL, 0FFh
            JB c3_while

;es.4
c4_loop:    ADD AL, AL
            loop c4_loop

;es.5
c5_loop:    ADD BX, AX
            ADD AX, 02h
            CMP AX, 07h
            JB c5_loop
;es.6
c6_ciclo:   MOV AX, 00h
            JMP c6_continua
c6_while:   INC AX
c6_continua:CMP AX, CX
            JB c6_while
            LOOP c6_ciclo

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END