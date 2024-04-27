#include<iostream>
using namespace std;

void stampa(char V[], int n);
bool pilaVuota(int n);
bool pilaPiena(int n, int dim);
char pop(char V[], int &n);
void push(char V[], int &n, int dim, char val);


int main()
{
    const int dim = 10;
    int n = 0;
    char parola[dim];
    push(parola, n, dim, 'O');
    push(parola, n, dim, 'S');
    push(parola, n, dim, 'R');
    push(parola, n, dim, 'O');
    stampa(parola, n);
    while (!pilaVuota(n))
    {
        cout << pop(parola, n);
    }
}



void stampa(char V[], int n)
{
    cout << "Pila - ";
    for (int i = n-1; i >= 0; i--)
    {
        cout << V[i];
    }
    cout << endl;
}
 
bool pilaVuota(int n)
{
    if (n == 0)
        return true;
    return false;
}
bool pilaPiena(int n, int dim)
{
    if (n >= dim)
        return true;
    return false;
}
 
char pop(char V[], int &n)
{
    n--;
    return V[n];
}
 
void push(char V[], int &n, int dim, char val)
{
    if (!pilaPiena(n, dim))
    {
        V[n] = val;
        n++;
    }
   
}
 
