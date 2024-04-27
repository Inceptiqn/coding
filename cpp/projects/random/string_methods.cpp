#include <iostream>
#include <string>
int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters";
    }
    else if (name.empty())
    {
        std::cout << "You didn't enter your name";
    }
    else{
        std::cout << "Welcome " << name;
    }
    //name.clear();
    //name.append("@gmail.com");
    //std::cout << name;
    return 0;
}
