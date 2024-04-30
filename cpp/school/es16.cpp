#include <iostream>
using namespace std;
//Alessandro Aceti 3BI
int main(){
int dim = 1000;
int Vett1[dim], Vett2[dim], Vett3[dim];
int n;
int j = 0;
cout << "Inserisci grandezza vettore dei primi vettori: ";
cin >> n;
if(n > dim/2){
    cout << "numero troppo grande";
    return 1;
}

cout << "Inserimento primo vettore" << endl;
for(int i = 0; i < n; i++){
    cout << "Inserisci numero " << i + 1 << endl;
    cin >> Vett1[i];
}
cout << "Inserimento secondo vettore" << endl;
for(int i = 0; i < n; i++){
    cout << "Inserisci numero " << i + 1 << endl;
    cin >> Vett2[i];
}

for (int i = 0; i < n; i++){
    Vett3[j] = Vett1[i];
    j++;
    Vett3[j] = Vett2[i];
    j++;
}
for(int i = 0; i < j; i++){
        cout << Vett3[i] << " ";
    }
return 0;
}
