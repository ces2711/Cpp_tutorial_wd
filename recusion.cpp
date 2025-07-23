#include <iostream>

void walk(int steps);
void walk2(int steps);

int main(void){
    // recursion is a program technique where a function invokes itself
    // recursion typically uses less code and is cleaner, useful for sorting/searching
    // recursion uses more memory and is slower than iteration

    // iteration
    walk(100);

    // recursion
    walk2(100);


    return 0;
}

void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
}

void walk2(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk2(steps - 1);
    }
}