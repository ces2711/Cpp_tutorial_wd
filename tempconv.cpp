#include <iostream>

int main(void){

    double temp;
    char unit;

    std::cout << "***** Temperature Conversion *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is " << temp << " degrees Fahrenheit\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is " << temp << " degrees Celsius\n";
    }
    else{
        std::cout << "Please enter a valid unit.\n";
    }

    std::cout << "**********************************\n";
    
    return 0;
}
