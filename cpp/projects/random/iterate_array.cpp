#include <iostream>

int main(){

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    char grades[] = {'A', 'B', 'C', 'D', 'F'};


    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}