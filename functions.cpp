#include <iostream>

// function prototypes - use to keep main functino at top

void happyBirthday(std::string name, int age);

int main(void){
    
    // function = block of reusable code

    std::string name = "Conor";
    int age = 29;

    happyBirthday(name, age);
    std::cout << '\n';
    happyBirthday(name, age); 

    return 0;
}

// function definitions

void happyBirthday(std::string name, int age){
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday dear bitch ass\n";
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "You are " << age << " years old\n";
}

// returnType functionName(inputType inputName){}