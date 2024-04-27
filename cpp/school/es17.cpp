#include <iostream>
using namespace std;

// Define the structure for movements
struct Movement
{
    int codart;
    int quantity;
};

// Function prototypes
int inputElements(int dim);
void loadMovements(Movement movements[], int n);
void sortMovements(Movement movements[], int n);
void printMovement(const Movement &movement);

int main()
{
    const int dim = 20;
    Movement movements[dim];
    int n = inputElements(dim);
    loadMovements(movements, n);
    sortMovements(movements, n);
    for (int i = 0; i < n; i++)
    {
        printMovement(movements[i]);
    }
    return 0;
}

// Function to print information about a single movement
void printMovement(const Movement &movement)
{
    cout << "Codice: " << movement.codart << endl;
    cout << "Quantita: " << movement.quantity << endl;
}

// Function to input the number of movements
int inputElements(int dim)
{
    int n;
    cout << "Inserisci il numero di MOVIMENTI: ";
    cin >> n;
    while (n > dim || n <= 0)
    {
        cout << "Inserisci un numero di MOVIMENTI valido (massimo " << dim << "): ";
        cin >> n;
    }
    return n;
}

// Function to load movements
void loadMovements(Movement movements[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci codice articolo: ";
        cin >> movements[i].codart;
        cout << "Inserisci la quantita: ";
        cin >> movements[i].quantity;
    }
}

// Function to sort movements by codart
void sortMovements(Movement movements[], int n)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (movements[i].codart > movements[i + 1].codart)
            {
                swap(movements[i], movements[i + 1]);
                sorted = false;
            }
        }
    }
}
