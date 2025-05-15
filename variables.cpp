#include <iostream>

int main(void){

    int x; // declaration same as C
    x = 5; // assigned value same as C

    int y = 6; // do both in one line, same as C

    std::cout << x << '\n';
    std::cout << y << '\n';

    int age = 21;
    int year = 2023;
    int days = 7.5; // will be truncated bc int

    double price = 13.99;
    double gpa = 4.0;
    double temperature = 25.1;

    char grade = 'A';
    char initial = 'BC';
    // char will only store one variable
    // this will give a warning, and print the last
    // character in the string, C

    bool student = true; // only true or false
    bool power = false;
    bool forSale = true;

    // strings (different from C!)
    std::string name = "Conor";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << name << '\n';

    std::cout << price << '\n';
    std::cout << days << '\n';
    std::cout << initial << '\n';

    // string literal
    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    
    return 0;
}
