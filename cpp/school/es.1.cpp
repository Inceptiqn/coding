#include <iostream>
using namespace std;

int Inputdati(char &classe, float &peso, int &distanza)
{
    do
{
    cout << "inserire la classe N = normale U = urgente" << endl;
    cin >> classe;

} while (classe != 'U' && classe != 'u' && classe != 'N' && classe != 'n');


do
{
    cout << "inserire il peso in KG" << endl;
    cin >> peso;
    
} while (peso <= 0);


do
{
    cout << "inserire la distanza in KM" << endl;
    cin >> distanza;
    
} while (distanza <= 0);
}


int calcoloprezzo(char &classe, float &peso, int &distanza, float &c, int &dist1, int &dist2)
{
    if (classe == 'U' || classe == 'u')
    {
        if (distanza < dist1)
        c = 1.0;
        else if (distanza > dist2)
        c = 3.0;
        else
        c = 2.0;
    }
    else if (classe == 'N' || classe == 'n')
    {
        if (distanza < dist1)
        c = 1.0;
        else if (distanza > dist2)
        c = 2.0;
        else
    c = 1.5;
    }
}


int main()
{
float peso, c, costo;
int distanza;
char classe;
int dist1 = 100, dist2 = 500;

Inputdati(classe, peso, distanza);
calcoloprezzo(classe, peso, distanza, c, dist1, dist2);


costo = c * peso;
cout << "Il costo e " << costo << " euro" << endl;
}