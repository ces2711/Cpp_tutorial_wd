#include <iostream>

int main(void){
    // null value = special value that means something has no value
    // when a pointer is holding a null value, the pointer is not pointing to anything
    // use nullptr - keyword that represents a null pointer literal
    // help determine if an address was successfully assigned

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned\n";
    }
    else{
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }

    return 0;
}
