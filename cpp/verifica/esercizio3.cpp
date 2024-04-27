#include <iostream>
using namespace std;

int main()
{
const int dim = 100;
int primo[dim];
int secondo[dim];
int inserimento;
int k, n, div;
for (int i = 0; i < dim; i++)
{
    cout << "Inserisci il numero 1: ";
    cin >> inserimento;
    if (inserimento == 0)
    {
        i = dim + 1;
    }
    else
    {
        primo[i] = inserimento;
        cout << "Inserisci il numero 2: ";
        cin >> inserimento;
        if (inserimento == 0)
        {
            i = dim + 1;
        }
        else
        {
            secondo[i] = inserimento;
            n += 1;
        }
    }
}
cout << "Inserisci la costante K: ";
cin >> k;
for(int i = 0; i < n; i++){
    if(primo[i] * secondo[i] % k == 0)
        div += 1;
}
cout <<  div;
return 0;
}
