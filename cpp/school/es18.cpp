#include <iostream>
#include <string>
using namespace std;

struct ed{
    int codice;
    string descrizione;
    string categoria;
    float prezzo;
};
// stampa informazioni singolo record
void stpd(ed ok){
    cout << "Codice: " << ok.codice << endl;
    cout << "descrizione: " << ok.descrizione << endl;
    cout << "categoria: " << ok.categoria << endl;
    cout << "prezzo: " << ok.prezzo << endl;
}
//
// richiesta numero elementi
int inputElementi(int dim) {
    int n;
    cout << "Inserisci il numero di elettrodomestici: ";
    cin >> n;
    while (n > dim){
        cout << "Inserisci il numero di elettrodomestici: ";
        cin >> n;
    }
    return n;
 }
//
// caricamento dati sapendo a priori numero elementi (n)
void caricaTAB(ed ok[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci codice: ";
        cin >> ok[i].codice;
        cout << "Inserisci descrizione: ";
        cin >> ok[i].descrizione;
        cout << "Inserisci categoria: ";
        cin >> ok[i].categoria;
        cout << "Inserisci prezzo: ";
        cin >> ok[i].prezzo;
    }
}
// Algoritmi ricerca
// ------------------
//tabella non ordinata - + record con stesso codice - stampa informazioni
void stpCodici(ed ok[], int code, int n){
    bool b = false;
    for (int i = 0; i < n; i++) {
        if(code == ok[i].codice){
           stpd(ok[i]);
           b = true;
        }
    }
    if(!b){
        cout << "Codice non trovato"<<endl;
    }
}
//tabella non ordinata - + record con stesso codice - ritorna numero elementi e vettore posizioni
int ricercaCodici(ed ok[], int code, int n, int pos[]) {
    int j=0;
    for (int i = 0; i < n; i++) {
        if(code == ok[i].codice){
           pos[j]=i;
           j++;
        }
    }
    return j;
}

// tabella non ordinata con un solo record - stampa informazioni
void stpcodice(ed ok[], int n, int code){
    int i = 0;
    while (i<n && code != ok[i].codice)
            i++;
    if(i<n)
        stpd(ok[i]);
    else
        cout << "CODICE NON TROVATO" << endl;
}
//
//tabella ordinata in ordina crescente rispetto al codice di ricerca - un solo record
void stpCodiceOrd(ed ok[], int n, int code){
    int i = 0;
    while (i<n && code < ok[i].codice)
          i++;
    if(i<n && code == ok[i].codice )
         stpd(ok[i]);
    else
        cout << "CODICE NON TROVATO" << endl;
}

// tabella non ordinata con un solo record - ritorna posizione record - ritorna -1 se non trovato
int ricercaCodice(ed ok[], int n, int code ){
    int i = 0;
    while (i<n && code != ok[i].codice)
            i++;
    if(i<n) return i;
    return -1;
}
//
int ricercaCodOrd(int code, ed ok[], int n){
    int i = 0;
    while (i<n && code < ok[i].codice)
          i++;
    if( i<n && code == ok[i].codice )
        return i;
    return -1;
}

//tabella ordinata con piu codici
void stpcod(int code, ed ok[], int n){
    int i = 0;
    while (i<n && code != ok[i].codice)
        i++;
}
//
//  FUNZIONE
//  ricerca categoria  e torna posizione
int ricercaCategoria(ed ok[], int n, string categoria){
    int i = 0;
    while (i<n && categoria!= ok[i].categoria)
            i++;
    if(i<n) return i;
    return -1;
}
//  ricerca categoria ritorna vero se trovato
bool ricercaCategoria(ed ok[], string categoria, int n){
    int i = 0;
    while (i<n && categoria!= ok[i].categoria)
            i++;
    if(i<n) return true;
    return false;
}

// ricerca prezzomax sapendo che categoria esiste
float prezzoMax(ed ok[], string category, int n, int primo){
    float pzMax=ok[primo].prezzo;
    //determino il valore massimo per la categoria
    for (int i = primo+1; i < n; i++) {
        if (category == ok[i].categoria && pzMax < ok[i].prezzo)
            pzMax = ok[i].prezzo;
    }
    return pzMax;
}
float prezzoMax(ed ok[], string category, int n){
    float pzMax;
    bool primo=false;
    //determino il valore massimo per la categoria
    for (int i = 0; i < n; i++) {
        if (category == ok[i].categoria )
            if (primo=false) {
                pzMax = ok[i].prezzo;
                primo = true;
                }
            else {
                if (pzMax < ok[i].prezzo)
                    pzMax = ok[i].prezzo;
                 }
    }
    return pzMax;
}
//
// funzione per determinare
float prezzoMedio(ed ok[], int n, string descr){
    float media=0;
    int conta=0;
    for (int i = 0; i < n; i++) {
        if (descr == ok[i].descrizione) {
            media = media + ok[i].prezzo;
            conta++;
        }
    }
    if (conta!=0)
        return (media/(float)conta);
    return 0;
}
//
//  programma main
int main(){
    const int dim = 5;
    ed elettrodomestici[dim];
    //
    // Richiesta numero elementi
    int n=inputElementi(dim);
    caricaTAB(elettrodomestici, n);
    //
    // punto A - ricerca elettrodomestico con codice = code - stampa informazioni
    int code;
    cout << "Digita codice di cui vuoi stampare info: ";
    cin >> code;
    int indice=ricercaCodice(elettrodomestici, n, code);
    if (indice<0)
       cout << "codice non trovato"<< endl;
    else
       stpd(elettrodomestici[indice]);
    //
    // punto B - prezzo massimo categoria
    string category;
    cout << " Punto B - stampa prezzo max elettrodomestici di una categoria" << endl;
    cout << "Digita categoria ";
    cin >> category;
    indice=ricercaCategoria(elettrodomestici, n, category);
    if(indice<0)
       cout<< "categoria "<< category<< " non presente"<<endl;
    else
       cout<< "categoria "<< category<< " - prezzo massimo "<< prezzoMax(elettrodomestici, category, n, indice)<< endl;
    //
    // punto C - prezzo medio frigoriferi
    cout<< "frigoriferi - prezzo medio " << prezzoMedio(elettrodomestici, n, "frigoriferi")<< endl;
    return 0;
}
