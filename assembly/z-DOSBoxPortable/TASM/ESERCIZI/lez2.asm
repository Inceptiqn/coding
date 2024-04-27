;le variabili e gli indirizzamenti in assembly

TITLE variabili
.MODEL SMALL

.STACK

.DATA

;Come dichiarare una variabile in assembly 

;Sintassi:
;nome_variabile		tipo_variabile 		valore_iniziale
 
;il nome deve essere al massimo di 8 caratteri
;non è altro che una etichetta mnemonica per l'indirizzo di memoria

;i tipi possono essere:
;DB: Byte (8 bit)
;DW: Word (16 bit)
;DD: Double Word (32 bit)
;il numero di byte corrispondente viene allocato in memoria all'interno del data segment

;il valore iniziale può essere lasciato inalterato indicando il carattere ?

;Esempi

;nome	tipo 	valore_iniziale
var1 	DB		13h				;variabile di 8 bit contenente il valore 13h
var2	DB		?				;variabile di 8 bit a cui non assegno un valore 
var3	DB		'9'				;variabile di 8 bit a cui assegno il valore corrispondente al carattere 9
array1	DB		01h,02h,03h,04h	;array di 4 byte, contenente i rispettivi valori, ciascuno di 8 bit
array2	DB 		'a','b','c'		;array di 3 byte, contenente i rispettivi valori, ciascuno di 8 bit
stringa	DB 		'abc'			;stesso risultato del precedente
array3 	DW 		5555h,6666h,7777h

.CODE

.STARTUP

LEA 	SI, var1		;Load Effective Address 
						;copia l'indirizzo di memoria a cui si trova la variabile var1 nel registro SI
LEA 	SI, var2		;copia l'indirizzo di memoria a cui si trova la variabile var2 nel registro SI
LEA 	SI, var3
LEA 	SI, array1		;primo valore dell'array1
			;000A
LEA 	SI, array1+1 	;secondo valore dell'array1
			;000B
LEA 	SI, array1+2 	;terzo valore dell'array1
			;000C
LEA 	SI, array3		;primo valore dell'array3
			;000A
LEA 	SI, array3+2	;secondo valore dell'array3
			;000C
LEA 	SI, array3+4 	;terzo valore dell'array3
			;000E




;Gli indirizzamenti 
;Disponiamo di vari metodi per accedere agli operandi:

;Indirizzamento immediato
;l'operando è un valore immediato (una costante scritta direttamente nel codice)
MOV 	DL, 22h 		;il secondo operando di questa istruzione è un dato immediato

;Indirizzamento a registro
;l'operando è contenuto all'interno di un registro. Può essere sia sorgente che destinazione di una operazione.
MOV 	DL, 22h			;il primo operando di questa istruzione è il registro AL

;Indirizzamento implicito
;l'operando non viene specificato, è implicitamente assunto dall'istruzione usata
MUL 	DL 				;l'operando è a 8bit, moltiplica AL per DL e mette il risultato in AX.
						;AX e AL non sono scelti dall'utente ma sono utilizzati implicitamente da MUL
						
;Indirizzamento diretto
;L'operando è contenuto in una cella di memoria il cui indirizzo è una costante (non è costante il dato ma la sua posizione!)
MOV 	AL, var1		;copia il contenuto della variabile (cioè il contenuto dell'area di memoria indirizzata
						;da var1) in AL. l'indirizzo di var1 non cambia durante l'esecuzione del programma
						
;Indirizzamento indiretto
;L'operando è contenuto in una cella di memoria; l'indirizzo della cella è contenuto in un registro
MOV 	AL, [SI]		;copia il contenuto della cella di memoria puntata da SI in AL

;Indirizzamento indicizzato
;L'indirizzo della cella di memoria dell'operando è ottenuto unendo due registri (base e spiazzamento)

MOV 	DS:[SI], DL		;copia il contenuto di DL nella cella puntata da DS:SI



;chiusura del programma
MOV     AH,4CH 			;Pone fine al processo in atto
INT     21H 			;tornando al prompt del DOS 
END


