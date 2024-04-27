#include <iostream>
using namespace std;

int ns;
float la, lp, lt, costototale, costoscatto, costoabbonamento;

int main() {
    costoscatto = 0.10;
    costoabbonamento = 26.80;
    cout << "Scrivi il numero di scatti attuali";
    cin >> la;
    cout << "Scrivi il numero di scatti precedenti";
    cin >> lp;
    lt = lp - la;
    costototale = lt * costoscatto;
    costototale = costototale + costoabbonamento;
    cout << "il costo totale e " << costototale << endl;
    return 0;
}