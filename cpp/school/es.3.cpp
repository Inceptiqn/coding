#include <iostream>
using namespace std;

int main() 
{
    int b, c;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "Inserisci il valore di c: ";
    cin >> c;

    if (b > c) {
        b = b - c;
    } else {
        c = c - b;
    }

    c = c * b;
    cout << "Il nuovo valore di b: " << b << endl;
    cout << "Il nuovo valore di c: " << c << endl;

    return 0;
}