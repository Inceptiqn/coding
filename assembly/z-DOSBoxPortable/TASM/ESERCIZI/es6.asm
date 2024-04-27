;template base di un generico programma utilizzando le direttive semplificate
TITLE template

.MODEL SMALL

.STACK

.DATA

nome DB 'ALESSANDRO'

.CODE

.STARTUP

MOV CL, nome
add CL, 20h
MOV nome, CL
MOV CL, nome+1
add CL, 20h
MOV nome+1, CL
MOV CL, nome+2
add CL, 20h
MOV nome+2, CL
MOV CL, nome+3
add CL, 20h
MOV nome+3, CL
MOV CL, nome+4
add CL, 20h
MOV nome+4, CL
MOV CL, nome+5
add CL, 20h
MOV nome+5, CL
MOV CL, nome+6
add CL, 20h
MOV nome+6, CL
MOV CL, nome+7
add CL, 20h
MOV nome+7, CL
MOV CL, nome+8
add CL, 20h
MOV nome+8, CL
MOV CL, nome+9
add CL, 20h
MOV nome+9, CL

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS
END