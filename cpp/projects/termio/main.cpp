#include <iostream>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int i;
    for (i = 0; i < argc; i++) {
    std::cout << "argv[" << i << "]: "<< argv[i] << std::endl;
    }
    int result = 3;
    for (i = 1; i < argc; i++) {
        int x = strtol(argv[i], NULL, 10);
        result = result * x;
        std::cout << result << std::endl;
    }
    return 0;
}