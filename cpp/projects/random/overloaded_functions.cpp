#include <iostream>

void creapizza();
void creapizza(std::string topping1);
void creapizza(std::string topping1, std::string topping2);

int main(){
    
    creapizza();
    creapizza("pepperoni");
    creapizza("pepperoni", "mushroom");

    return 0;
}

void creapizza(){
    std::cout << "Here is your pizza\n";
}

void creapizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void creapizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}