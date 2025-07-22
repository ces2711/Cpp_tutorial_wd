#include <iostream>

int main(void){
    // memory address = location in memory where data is stored
    // a memory address can be accessed with & operator (address of)

    std::string name = "Conor";
    int age = 29;
    bool student = false;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    // this will display in hex
    // gap between name and age is 4, but gap between age and student is 1
    // this is because name age is an int and takes up 4 bytes, student is a bool and takes up 1 byte

    return 0;
}
