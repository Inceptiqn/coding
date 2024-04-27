#include <iostream>

void happybirthday(std::string a, int b);

int main()
{

    std::string name = "Ace";
    int age = 16;


    happybirthday(name, age);
    happybirthday(name, age);
    happybirthday(name, age);

    return 0;
}

void happybirthday(std::string a, int b)
{
    std::cout << "Happy birthday " << a << " !" <<  "\n";
    std::cout << "You are " << b << " years old" <<  "\n\n";

}
