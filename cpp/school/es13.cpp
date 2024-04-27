#include <iostream>
using namespace std;

struct regali
{
    string cliente;
    string tipo;
    int valore;
};

void Creazione(regali V[], int &n);
void edit(regali V[], int n);
void print(regali V[], int n);
void Incremento(regali V[], int n);
void Decrement(regali V[], int n);

int main()
{
    const int dim = 100;
    int n;
    regali V[dim];
    bool end = false;
    int modenumber;
    Creazione(V, n);
    while (!end)
    {
        cout << "Che modalità vuoi usare(1. Edit, 2. Incremento, 3. Decremento)\n";
        cin >> modenumber;
        if (modenumber == 1)
        {
            edit(V, n);
        }
        else if (modenumber == 2)
        {
            Incremento(V, n);
        }
        else if (modenumber)
        {
            Decrement(V, n);
        }
        else
        {
            cout << "Sbagliato";
        }
    }
    return 0;
}

void print(regali V[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << V[i].cliente << " | ";
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << V[i].tipo << " | ";
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << V[i].valore << " | ";
    }
    cout << '\n';
}

void Creazione(regali V[], int &n)
{
    cout << "Quanti regali? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nome del cliente " << i + 1 << ": ";
        cin >> V[i].cliente;
        cout << "Tipo del regalo " << i + 1 << ": ";
        cin >> V[i].tipo;
        cout << "Valore del regalo " << i + 1 << ": ";
        cin >> V[i].valore;
    }
    cout << "Fine creazione database\n\n";
}

void edit(regali V[], int n)
{
    string clientNumber;
    cout << "Nome del cliente da modificare: ";
    cin >> clientNumber;
    for (int i = 0; i < n; i++)
    {
        if (clientNumber == V[i].cliente)
        {
            cout << "Inserisci il nuovo valore del regalo: ";
            cin >> V[i].valore;
        }
    }
    print(V, n);
}

void Incremento(regali V[], int n)
{
    string clientType;
    float percent;
    cout << "Tipo da modificare: ";
    cin >> clientType;
    cout << "Valore dell'incremento: ";
    cin >> percent;
    for (int i = 0; i < n; i++)
    {
        if (clientType == V[i].tipo)
        {
            V[i].valore = V[i].valore * (1 + percent / 100);
        }
    }
    print(V, n);
}

void Decrement(regali V[], int n)
{
    string clientType;
    float percent;
    cout << "Tipo da modificare: ";
    cin >> clientType;
    cout << "Valore del decremento: ";
    cin >> percent;
    for (int i = 0; i < n; i++)
    {
        if (clientType == V[i].tipo)
        {
            V[i].valore = V[i].valore * (1 - percent / 100);
        }
    }
    print(V, n);
}