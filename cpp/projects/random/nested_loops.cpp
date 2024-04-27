#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?";
    std::cin >> rows;

    std::cout << "How many columns?";
    std::cin >> columns;

    std::cout << "choose a symbol?";
    std::cin >> symbol;

    for (int rows = 1; rows <= 10; rows++)
    {
        for (int columns = 1; columns <= 3; columns++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
}
