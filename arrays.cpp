#include <iostream>
#include <iomanip>

int main(void){

    // array = data structure with multiple values

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    // need to use the index number to access elements in an array
    // the array name without an index is a pointer to the first element in the array
    // so the line below will output the address of the first element, not the
    // actual first element
    // std::cout << car << '\n';

    cars[0] = "Camero";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    // arrays can only contain the same datatype
    // if you want to declare an array and assign values later,
    // you need to assign the size of the array first

    std::string trucks[3];

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << std::setprecision(2) << std::fixed << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}
