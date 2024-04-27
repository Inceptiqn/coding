#include <iostream>

int main() {
    const int dim = 100;
    int vettore[dim];
    int dimensioneAttuale = 0, elemento, risposta;
    do {
        std::cout << "Inserisci un elemento: ";
        std::cin >> elemento;

        bool elementoPresente = false;
        for (int i = 0; i < dimensioneAttuale; ++i) {
            if (vettore[i] == elemento) {
                elementoPresente = true;
                break;
            }
        }

        if (elementoPresente) {
            std::cout << "L'elemento e' gia' presente nell'array. Reinseriscilo." << std::endl;
        } else {
            if (dimensioneAttuale < dim) {
                vettore[dimensioneAttuale] = elemento;
                dimensioneAttuale++;
                std::cout << "Elemento aggiunto all'array." << std::endl;
            } else {
                std::cout << "L'array è pieno. Impossibile aggiungere altri elementi." << std::endl;
                break;
            }
        }

        std::cout << "Vuoi inserire un altro elemento? (S/N): ";
        std::cin >> risposta;

    } while (risposta == 'S');

    std::cout << "Array risultante: ";
    for (int i = 0; i < dimensioneAttuale; ++i) {
        std::cout << vettore[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}