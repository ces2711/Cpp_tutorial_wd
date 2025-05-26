#include <iostream>

double square(double length);

double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

int main(void){

    // return keyword
    // return a value back to the spot where the 
    // encompassing function was called

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "The area is " << area << '\n';
    std::cout << "The volume is " << volume << '\n';

    std::string firstName = "Conor";
    std::string lastName = "Shanley";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello, " << fullName << '\n';

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}