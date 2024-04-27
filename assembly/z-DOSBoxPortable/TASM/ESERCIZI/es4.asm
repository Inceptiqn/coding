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

giorno DB 14h
mese DB 4h
anno DW 7D7h
nome DB 'Alessandro'

;code segment
.CODE
;qui va il codice che non viene automaticamente eseguito allo startup (es procedure)
.STARTUP
;qui va il codice eseguito all'avvio del programma

LEA SI, giorno
LEA SI, mese
LEA SI, anno
LEA SI, nome
LEA SI, nome+9

;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END