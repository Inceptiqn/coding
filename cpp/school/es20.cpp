#include<iostream>
using namespace std;

void caricaTabella(infodipendenti tab[], int &n);
void caricaTabella(infodipendenti tab[], int &n, int soglia);
void stampa(infodipendenti rec);


struct infodipendenti{
    string cognome;
    string nome;
    int eta;
    float stipendio;
};



int main()
{
    const int dim=10;
    int n;
    infodipendenti tab[dim];
}


void caricaTabella(infodipendenti tab[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Cognome ";
        cin >> tab[i].cognome;
        cout << "nome ";
        cin >> tab[i].nome;  
        cout << "eta ";
        cin >> tab[i].eta;
        cout << "stipendio ";
        cin >> tab[i].stipendio;     
    }
    
}


void caricaTabella(infodipendenti tab[], int &n, int soglia)
{
    for (int i = 0; i < n; i++)
    {
        if (tab[i].eta < soglia)
        {
            stampa(tab[i]);
        }
        
    }
}

void stampa(infodipendenti rec)
{
    cout << rec.cognome << endl;
    cout << rec.nome << endl;
    cout << rec.eta << endl;
    cout << rec.stipendio << endl;
}