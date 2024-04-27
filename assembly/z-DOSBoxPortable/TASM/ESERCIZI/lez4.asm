;stampa a schermo di un carattere
TITLE stampaCarattere
.MODEL SMALL
.STACK
.DATA
.CODE
.STARTUP

;il BIOS mette a disposizione una serie di funzionalità per l'utilizzo delle periferiche, ad esempio lo schermo. I servizi BIOS di gestione video vengono richiamati con l'istruzione INT 10h. La funzione è selezionabile in base al contenuto di alcuni registri (di solito AL e AH). https://en.wikipedia.org/wiki/INT_10H
;Esempi:

;---------------
;INT 10H  Funzione 00H 	Gestione del Modo Video
;AH è posto a 00H
;AL indica il codice del Modo Video desiderato -> 03H 	Testo Standard 80x25
;quando si cambia il Modo Video viene riconfigurato e reinizializzato tutto l'ambiente Video: come effetto collaterale produce l'effetto ClearScreen (lo schermo viene cancellato) 

MOV     AH,00H        ;Provvede    alla   cancellazione   del   video,
MOV     AL,03H        ;posizionando il cursore alla  riga0,  colonna0,
INT     10H           ;in alto a sinistra

;---------------
;INT 10H 	Funzione 0EH 	Stampa un carattere in Modo TTY
;Scrive un carattere nella posizione di stampa e nella pagina video corrente e aggiorna la posizione del cursore.
;AH è posto a 0EH
;AL indica il codice Ascii del carattere da stampare

MOV     AH,0EH        ;Provvede alla stampa  del  carattere  Ascii "A"
MOV     AL,'A'        ;con i colori standard (bianco su nero) e  nella
INT     10H           ;posizione di  stampa corrente (riga0, colonna0)


;chiusura del programma
MOV     AH,4CH        ;Pone fine al processo in atto
INT     21H           ;tornando al prompt del DOS 
END


