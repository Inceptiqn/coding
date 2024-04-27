#include<iostream>
using namespace std;

void print(int vet[10], int dim);
void input(int vet[10], int dim);
void compara(int vet_1[10], int vet_2[10], int vet_3[10], int dim);


int main(){
    const int dim = 10;
    int vet_1[dim];
    int vet_2[dim];
    int vet_3[dim];
    
    cout << "Inserisci i 10 elementi del primo vettore:" << '\n';
    input(vet_1, dim);
    cout << "Inserisci i 10 elementi del secondo vettore:" << '\n';
    input(vet_2, dim);
    compara(vet_1, vet_2, vet_3, dim);
    cout << "Gli elementi più piccoli sono:" << '\n';
    print(vet_3, dim);
    
}

void input(int vet[10], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cin >> vet[i];
    }
}



void print(int vet[10], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        cout << vet[i];
    }
}



void compara(int vet_1[10], int vet_2[10], int vet_3[10], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if (vet_1[i] < vet_2[i])
        {
            vet_3[i] = vet_1[i];
        }
        else
        {
            vet_3[i] = vet_2[i];
        }
        
    }
}