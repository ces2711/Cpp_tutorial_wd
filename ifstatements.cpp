#include <iostream>

int main(void){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // if else statements, and comparison operators, are basically the same as C

    if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!\n";
    }
    else if(age >= 100){
        std::cout << "You are too old!\n";
    }
    // this will not execute even if age is greater than 100, because the first
    // if statement is already satisfied, and all else statements are skipped
    else{
        std::cout << "You are not old enough to enter.\n";
    }

    return 0;
}
