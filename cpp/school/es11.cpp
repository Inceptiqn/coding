#include <iostream>
#include <math.h>
using namespace std;

bool verificaQ(float vx[], float vy[], int n);

int main()
{
    const int dim = 4;
    int i;
    int n = 4;

    struct Punto
    {
        float x;
        float y;
    };

    Punto punti[dim];


    float puntiX[dim], puntiY[dim];
    for (i = 0; i < n; i++)
    {
        cout << "Inserisci ascissa punto " << i + 1 << '\n';
        cin >> punti[i].x;
        cout << "Inserisci ordinata punto " << i + 1 << '\n';
        cin >> punti[i].y;
    }
    if (verificaQ(puntiX, puntiY, n))
    {
        cout << "Quadrato\n";
    }
    else
    {
        cout << "Non quadrato\n";
    }
    
    return 0;
}

bool verificaQ(float vx[], float vy[], int n)
{
    float dx, dy, d12, d23, d34, d41;
    dx = vx[0] - vx[1];
    dy = vy[0] - vy[1];
    d12 = sqrt(dx * dx + dy * dy);
    dx = vx[1] - vx[2];
    dy = vy[1] - vy[2];
    d23 = sqrt(dx * dx + dy * dy);
    if (d12 != d23)
    {
        return false;
    }
    dx = vx[2] - vx[3];
    dy = vy[2] - vy[3];
    d34 = sqrt(dx * dx + dy * dy);
    if (d12 != d34)
    {
        return false;
    }
    dx = vx[3] - vx[4];
    dy = vy[3] - vy[4];
    d34 = sqrt(dx * dx + dy * dy);
    if (d12 != d41)
    {
        return false;
    }
    else
    {
        return true;
    }
}