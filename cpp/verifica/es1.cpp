#include <iostream>
using namespace std;
//Alessandro Aceti 3BI
int main()
{
    const int dim = 100;
    double Alti[dim];
    int n;
    int media;
    int somma = 0;
    int maggiore = 0;
    int posmaggiore;
    cout << "Quante altezze vuoi salvare?";
    cin >> n;

    //caricamento vettore
    for(int i = 0; i < n; i++){
        cout << "Inserisci altezza numero " << i + 1 << endl;
        cin >> Alti[i];
    }

    //trovo maggiore e somma per media
    for(int i = 0; i < n; i++){
    somma += Alti[i];
    if (maggiore < Alti[i])
    {
        maggiore = Alti[i];
        posmaggiore = i;
    }
    }
    media = somma / n;


    for(int i = 0; i < n; i++){
        if (media > Alti[i])
        {
            Alti[i] = 0;
        }
    }
    cout << "La altezza media è: " << media << endl;
    cout << "La altezza massima è alla posizione " << posmaggiore + 1 << endl;
    for(int i = 0; i < n; i++){
        cout << Alti[i] << " ";
    }
    return 0;
}
