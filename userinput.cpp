#include <iostream>

int main(void){
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;
    // cin leaves a new line character in the input buffer
    // to prevent this, need to use std::cin >> std::ws (whitespace) in the getline
    // command below

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);
    // use getline() and arguments std::cin and name if you are accepting a string
    // that may contain spaces. If not, the code will not work properly

    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}
