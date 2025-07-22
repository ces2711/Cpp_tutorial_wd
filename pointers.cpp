#include <iostream>

int main(void){
    // pointers are variables that store the memory address of another variable
    // & address of operator
    // * dereference operator

    std::string name = "Conor";
    int age = 29;
    std::string freeRealEstate[3] = {"House 1", "House 2", "House 3"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pfreeRealEstate = freeRealEstate; //the name of an array without index is a pointer to its first element

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pfreeRealEstate << '\n';

    return 0;
}
