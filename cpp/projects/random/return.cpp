#include <iostream>

double square(double length);
double cube(double length);
std::string concatString(std::string string1, std::string string2);

int main()
{
    double length = 5.0;
    std::string firstName = "Ace";
    std::string lastName = "buongio";
    double area = square(length);
    double volume = cube(length);
    std::string fullName = concatString(firstName, lastName);


    std::cout << "Area: " << area << " cm2\n";
    std::cout << "Volume: " << volume << " cm3\n";
    std::cout << "Hello " << fullName;

    return 0;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

std::string concatString(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}
