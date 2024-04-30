#include <iostream>
using namespace std;
//Alessandro Aceti 3BI
int main(){
int dim = 1000;
int n;
cout << "Quanti giorni?";
cin >> n;
double V[dim];
int somma, media;
int sommal = 0;
for(int i = 0; i < n; i++){
    cout << "Inserisci tonnellate del giorno " << i + 1 << endl;
    cin >> V[i];
}

for(int i = 0; i < n; i++){
    somma += V[i];
}
media = somma / n;
cout << "I giorni inferiori alla media sono i giorni: ";
for(int i = 0; i < n; i++){
    if(V[i] < media){
        cout << i + 1 << " ";
    }
}
cout << endl;
for(int i = 5; i < n; i+=7){
    sommal += V[i];
}
cout << "sommal = " << sommal;
return 0;
}
