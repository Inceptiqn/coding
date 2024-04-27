#include <iostream>
using namespace std;

int main()
{
    const int dim = 50;
    int n;
    string squadre[dim];
    string richiesta;
    char serie[dim];
    int punti[dim];

    n = 40;

    for (int i = 0; i < n; i++)
    {
        cout << "Nome squadra\n";
        cin >> squadre[i];
        cout << "In che capionato gioca?\n";
        cin >> serie[i];
        cout << "Quanti punti ha fatto?\n";
        cin >> punti[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (serie[i] == 'A')
        {
            cout << "La squadra numero " << i + 1 << "è" << squadre[i] << "con punti: " << punti[i] << '\n';
        }
        
    }
    cout << "Che squadra chiedi?\n";
    cin >> richiesta;
    int i = 0;
    while (i < n && richiesta!=squadre[i])
    {
        i++;
    }
    if (i<n)
    {
        cout << "La squadra numero " << i + 1 << "è" << squadre[i] << "con punti: " << punti[i] << '\n';
    }
    else
    {
        cout << "squadra non trovata\n";
    }

    pos = 2;
    
}