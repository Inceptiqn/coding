;lettura da tastiera
;il programma continua ad acquisire cifre dalla tastiera finché non premo ESC
TITLE leggiCifra

.MODEL SMALL
.STACK
.DATA

tastoESC DB 27	;valori ASCII del tasto ESC

.CODE
.STARTUP

;I servizi BIOS di gestione tastiera vengono richiamati con l'istruzione INT 16h. 
;La funzione è selezionabile in base al contenuto di AH.
;https://en.wikipedia.org/wiki/INT_16H

;INT 16H  Funzione 00H 	Lettura tasto premuto
;AH è posto a 00H
;AL conterrà il codice ASCII del tasto premuto


input:  MOV     AH,00H			;Rimane in attesa della pressione  di  un  tasto
		INT     16H           	
		CMP     AL, tastoESC	;verifica se il tasto premuto è ESC
		JE      uscita			;Se è così va a terminare il programma...
		
		CMP     AL,'9'			;"Filtra" i codici ricevuti in AL e se non sono
        JA      input         	;nell'intervallo ammesso (tra '0' e '9') allora
        CMP     AL,'0'        	;torna direttamente all'input
        JB      input         	
		
		MOV     AH,0EH        	;Altrimenti stampa il carattere
		INT     10H      
		JMP     input   		;torna all'immissione di un input

;chiusura del programma
uscita: MOV     AH,4CH        	;Pone fine al processo in atto
        INT     21H           	;tornando al prompt del DOS 

		END


