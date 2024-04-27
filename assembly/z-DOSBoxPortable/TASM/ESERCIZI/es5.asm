;template base di un generico programma utilizzando le direttive semplificate
TITLE template

.MODEL SMALL

.STACK

.DATA

var1 DB 15h
var2 DB 22h
array1 DB 'ABC'
array2 DB 'ZZZ'
.CODE

.STARTUP

;non si possono fare modifiche da ram a ram

;es.1
MOV AL, var1                                                                                                                                                                                                                                                                        .
MOV AH, var2
MOV var2, AL
MOV var1, AH

;es.2       usando MOV indiretto
LEA SI, array1 ;copia indirizzo della prima lettera in SI
MOV AL, [SI] ;copia il contenuto dell'indirizzo
LEA SI, array1+1
MOV BL, [SI]
LEA SI, array1+2
MOV CL, [SI]

MOV array2, CL
MOV array2+1, BL
MOV array2+2, AL


;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS
END