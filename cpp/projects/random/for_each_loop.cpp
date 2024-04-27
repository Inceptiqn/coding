#include <iostream>

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(std::string students : students){
        std::cout << students << '\n';
    }
    return 0;
}