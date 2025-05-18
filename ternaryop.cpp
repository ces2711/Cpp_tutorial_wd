#include <iostream>

int main(void){
    // ternary operator ?: replacement for an if/else statement
    // condition ? expression1 : expression 2

    int grade = 75;

    grade >= 75 ? std::cout << "You pass!" : std::cout << "You fail!";

    int number = 8;

    number % 2 == 1 ? std::cout << "Odd" : std::cout << "Even";

    bool hungry = true;

    hungry ? std::cout << "You are hungry" : std::cout << "You are full";

    // you can do the same thing by outputting the ternary part inside parethesis
    // using std::cout once
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}
