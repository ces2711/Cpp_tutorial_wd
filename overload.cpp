#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
// this is valid - you can have two functions with the same name if they take different
// parameters
// these are "overloaded functions"
// fn name + parameters = function signature, that must be unique

int main(void){

    bakePizza("Pepperoni", "Mushrooms");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " Pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " Pizza!\n";
}