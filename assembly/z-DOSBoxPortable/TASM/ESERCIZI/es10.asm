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

var1 DB 00h
var2 DW 0102h
var3 DB 02h
;code segment
.CODE
;qui va il codice che non viene automaticamente eseguito allo startup (es procedure)
.STARTUP
;qui va il codice eseguito all'avvio del programma

;es.1
MOV AL, 02h
MOV BL, 09h
ADD AL, BL
MOV var1, AL

;es.2
            MOV CX, 04h
c2_loop:    ADD var2, 20h
            LOOP c2_loop

;es.3
            CMP var2, 0111h
            JBE c3_continua
            MOV var1, 00h
c3_continua:

;es.4
            MOV AL, var3
            ADD AL, var1
            CMP AL, 0AAh
            JAE c4_continua
            MOV DL, AL
c4_continua:

;es.5
            MOV CX, 04h
c5_loop:    ADD var2, 04h
            LOOP c5_loop

;es.6
            MOV CX, 0005h
c6_loop:    
            CMP var2, 0FFFh
            JAE c6_continua
            ADD var2, CX
c6_continua:LOOP c6_loop

;es.7
            MOV AL, 01h
c7_loop:    INC AL
            MOV DL, var3
            CMP var1, DL
            JB c7_if
            ADD var3, AL
            JMP c7_continua
c7_if:      ADD var3, AL
c7_continua:CMP AL, 0005h
            JB c7_loop

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END



