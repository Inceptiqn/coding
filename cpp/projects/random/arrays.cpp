#include <iostream>
#include <ctime>

int random();

int main()
{
    srand(time(0));
    std::string car[] = {"Corvette", "Mustang", "Camry"};
    std::cout << car[random()] << '\n';
    std::cout << car[random()] << '\n';
    std::cout << car[random()] << '\n';
    return 0;
}

int random()
{
    int random = rand() % 3;
    return random;
}