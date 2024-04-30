#include <iostream>
using namespace std;
//Alessandro Aceti 3BI
int main()
{
const int dim = 100;
int primo[dim];
int secondo[dim];
int input;
int k;
int n = 0;
int conto = 0;
for (int i = 0; i < dim; i++)
{
    cout << "Inserisci il primo numero\n";
    cin >> input;
    if (input == 0)
    {
        i = dim + 1;
    }
    else
    {
        primo[i] = input;
        cout << "Inserisci il secondo numero\n";
        cin >> input;
        if (input == 0)
        {
            i = dim + 1;
        }
        else
        {
            secondo[i] = input;
            n += 1;
        }
    }
}
cout << "Inserisci la costante K: ";
cin >> k;
for(int i = 0; i < n; i++){
    if((primo[i] * secondo[i]) % k == 0){
                conto += 1;
    }
}
cout << "I Multipli di K sono " <<conto;
return 0;
}
