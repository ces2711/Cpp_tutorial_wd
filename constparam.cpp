#include <iostream>

void printInfo(const std::string name, const int age);

int main(void){
    // const parameter = parameter that is effectively read-only
    // code is more secure, makes code more readable

    std::string name = "Conor";
    int age = 29;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){
    //name = " ";
    //age = 0;
    // const prefix prevents changing name and age in function
    // not important for pass by value, but good to do when passing by reference
    std::cout << name << '\n';
    std::cout << age << '\n';
}
