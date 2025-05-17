#include <iostream>

int main(void){

    // switch statments replace many else if statements

    int month;
    std::cout << "Enter the month (1-3): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January\n";
            break;
        case 2:
            std::cout << "It is February\n";
            break;
        case 3:
            std::cout << "It is March\n";
            break;
        // etc etc
        // need to use break to break out of the switch case
        default:
            std::cout << "Please enter in only numbers (1-3)\n";
    }

    return 0;
}
