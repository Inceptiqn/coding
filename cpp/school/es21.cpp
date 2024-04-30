#include <iostream>

struct rec
{
    int giorno;
    double spese;
    std::string motivo;
};

void caricatab(rec tab[], int &n, int dim);
void stampasomme(rec tab[], int n);
void checkforspese(rec tab[], int n);

int main()
{
    const int DIM = 100;
    rec tab[DIM];
    int n = 0;
    caricatab(tab, n, DIM);
    stampasomme(tab, n);
    checkforspese(tab, n);
}

void caricatab(rec tab[], int &n, int dim)
{
    while (n < dim)
    {
        std::cout << "record n: " << n + 1 << ":\n";
        std::cout << "Giorno: ";
        std::cin >> tab[n].giorno;
        std::cout << "Spese: ";
        std::cin >> tab[n].spese;
        std::cout << "Motivo: ";
        std::cin >> tab[n].motivo;
        n++;
        char choice;
        std::cout << "Do you want to enter another record? (y/n): ";
        std::cin >> choice;

        if (choice != 'y' && choice != 'Y')
            break;
    }
}

void stampasomme(rec tab[], int n)
{
    int temp;
    int somma = 0;
    std::cout << "Inserisci giorno da stampare: \n";
    std::cin >> temp;

    for (int i = 0; i < n; i++)
    {
        if (tab[i].giorno == temp)
        {
            somma += tab[i].spese;
        }
    }
    std::cout << "La somma e: " << somma << '\n';
}

void checkforspese(rec tab[], int n)
{
    std::cout << "i giorni con zero spese sono: \n";
    for (int i = 0; i < n; i++)
    {
        if (tab[i].spese == 0)
        {
            std::cout << tab[i].giorno << '\n';
        }
    }
}

void media(rec tab[], int n){
    int media;
    int somma;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i].spese > 0)
        {
            somma+=tab[i].spese;
            j++;
        }
        media = somma / j;
    }
}