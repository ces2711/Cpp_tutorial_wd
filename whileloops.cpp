#include <iostream>

int main(void){
    
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std:: getline(std::cin, name);
    }
    // while loop will execute until name is not empty

    std::cout << "Hello, " << name << '\n';

    return 0;
}
