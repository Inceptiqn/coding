#include <iostream>
using namespace std;
//Alessandro Aceti 3BI
//eserciio incompleto, manca A, E

int main()
{
    int dim = 11;
    int conto = 0, parole = 1;
    char Scritta[dim] = {"Il tuo cane"};
    for(int i = 0; i < dim; i++){
        cout << Scritta[i];
    }
    cout << endl << endl;


    //B
    for(int i = dim; i >= 0; i--){
        cout << Scritta[i];
    }
    cout << endl << endl;
    //C
    for(int i = 0; i < dim; i++){
    if(Scritta[i] == 'a'){
    conto++;
    }
    }
    cout << "la vocale 'A' e comparsa " << conto << " volte" << endl;
    //D
    for(int i = 0; i < dim; i++){
    if(Scritta[i] == ' '){
    parole++;
    }
    }
    cout << "numero parole: " << parole << endl;
return 0;
}
