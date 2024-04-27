;stampa a schermo di una stringa di caratteri
TITLE stampaStringa
.MODEL SMALL
.STACK
.DATA

txt01 DB "Hello world!",00H

;si ricorda che è un array, equivalente allo scrivere:
;txt01 DB 'H','e','l','l','o',' ','w','o','r','l','d','!',00H

;il byte 00H è detto terminatore di stringa: il codice che provvederà alla stampa a video potrà sapere con certezza qual è l'ultimo carattere da stampare, indipendentemente dalla lunghezza della stringa.

.CODE
.STARTUP

		MOV 	AH,00H    	;Provvede    alla   cancellazione   del   video,
		MOV 	AL,03H   	;posizionando il cursore alla  riga0,  colonna0,
		INT     10H     	;in alto a sinistra

		LEA     SI,txt01    ;Fissa il puntatore (nel nostro caso il registro
							;SI) alla stringa da stampare
					
print:  MOV     AL,[SI] 	;Preleva il carattere Ascii corrente
							;e lo mette in AL
        CMP     AL,00H  	;Controlla se si tratta del terminatore
        JZ      fine   		;Se è così la stampa della stringa è finita
		
		MOV     AH,0EH   	;Altrimenti stampa il carattere in AL 
		INT     10H         ;con la funzione 0EH di INT 10H
		
        INC     SI     		;Aggiorna il puntatore SI per puntare
							;al prossimo carattere
        JMP     print   	;rientra nel ciclo

		;chiusura del programma
fine:	MOV     AH,4CH 		;Pone fine al processo in atto
		INT     21H    		;tornando al prompt del DOS 

END


