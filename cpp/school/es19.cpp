#include<iostream>
using namespace std;

struct Funghi
{
    string volgare;
    string scientifico;
    string localita;
};

void Creazione(Funghi V[], int &n);
void SearchLocalita(Funghi V[], int &n);
void InfoFungo(Funghi V[], int &n);

int main()
{
    const int dim = 100;
    int n;
    int modenumber;
    Funghi V[dim];
    bool end = false;
    Creazione(V, n);
        while (!end)
    {
        cout << "Che modalità vuoi usare(1. Search, 2. Info)\n";
        cin >> modenumber;
        if (modenumber == 1)
        {
            SearchLocalita(V, n);
        }
        else if (modenumber == 2)
        {
            InfoFungo(V, n);
        }
        else
        {
            cout << "Sbagliato";
        }
    }
    return 0;
}

void Creazione(Funghi V[], int &n)
{
    cout << "Quanti funghi? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nome volgare del fungo " << i + 1 << ": ";
        cin >> V[i].volgare;
        cout << "Nome scientifico del fungo " << i + 1 << ": ";
        cin >> V[i].scientifico;
        cout << "Localita del fungo " << i + 1 << ": ";
        cin >> V[i].localita;
    }
    cout << "Fine creazione database\n\n";
}

void SearchLocalita(Funghi V[], int &n)
{
    string Local;
    int nfunghi;
    int i;
    cout << "Localita da cercare: ";
    cin >> Local;
    for (i = 0; i < n; i++)
    {
        if (Local == V[i].localita)
        {
            nfunghi += 1;
        }
    }
    cout << "Ci sono " << i + 1 << " funghi in questa zona\n";
}

void InfoFungo(Funghi V[], int &n)
{
    string Fungo;
    int nfunghi;
    cout << "Fungo da cercare: ";
    cin >> Fungo;
    for (int i = 0; i < n; i++)
    {
        if (Fungo == V[i].volgare)
        {
            cout << "Il fungo " << V[i].volgare << " Ha il nome scientifico " << V[i].scientifico << " E la localita " << V[i].localita << '\n';
        }
    }
}