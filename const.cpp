#include <iostream>

int main(void){
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    // const prefix prevents changes
    // pi = 420.69; this would cause an error in comp
    double radius = 10;
    double circumference = 2 * PI * radius;

    // use constants as often as possible
    // use anytime you know the value shouldn't be changed

    std::cout << circumference << "cm";

    return 0;
}
