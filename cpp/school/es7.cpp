#include<iostream>

void print(int array[], const int dim);

int main(){
    const int dim = 13;
    int array[dim];
    int somma = 0;
    for (int i = 0; i < dim - 1; i++){
        std::cout << "Inserisci la cifra " << i + 1 << '\n';
        std::cin >> array[i];
    }
    for (int i = 0; i < dim - 1; i++){
        if (i + 1 % 2 == 1){
            array[i] = array[i + 1] * 3;
        }
    somma += array[i];    
    }
    print(array, dim);
    array[dim - 1] = somma % 10;
    std::cout << array[12];
}

void print(int array[], const int dim){
    for (int i = 0; i < dim - 1; i++){
        std::cout << array[i];
    }
}