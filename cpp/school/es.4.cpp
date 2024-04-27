#include <iostream>
using namespace std;

int main() {
    int n, b, i;

    cout << "Inserisci n: ";
    cin >> n;
    cout << "Inserisci b: ";                                                                                                                                                                                                                                                                                        ;
    cin >> b;
    i = 1;

    while (i < n) {
        b = b + i;
        i = i + 1;
    }

    cout << "Il risultato è: " << b << endl;

    return 0;
}