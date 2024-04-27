;template base di un generico programma utilizzando le direttive semplificate
TITLE template

.MODEL SMALL

.STACK

.DATA

art1 DB 00h, 00h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
art2 DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
art3 DB 03h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 03h
art4 DB 03h, 00h, 00h, 03h, 00h, 03h, 00h, 00h, 00h, 00h, 03h, 00h, 03h, 00h, 00h, 03h
art5 DB 03h, 00h, 03h, 00h, 00h, 00h, 03h, 00h, 00h, 03h, 00h, 00h, 00h, 03h, 00h, 03h
art6 DB 03h, 00h, 00h, 03h, 00h, 03h, 00h, 00h, 00h, 00h, 03h, 00h, 03h, 00h, 00h, 03h
art7 DB 03h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 03h
art8 DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
art9 DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
artA DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
artB DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
artC DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
artD DB 03h, 00h, 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h, 00h, 03h
artE DB 03h, 00h, 00h, 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h, 00h, 00h, 03h
artF DB 03h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 03h
brt1 DB 03h, 00h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 00h, 03h, 00h, 00h, 00h, 00h, 03h
brt2 DB 03h, 00h, 00h, 00h, 00h, 00h, 03h, 03h, 03h, 03h, 00h, 00h, 00h, 00h, 00h, 03h
brt3 DB 03h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 03h
brt4 DB 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h

.CODE

.STARTUP

LEA SI, art1

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS
END