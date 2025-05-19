#include <iostream>

int main(void){

    //do while loop = do a block of code first, then repeat if condition is true

    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    // the above does not necessarily work as a plain while loop
    // because int number; randomly assigns what number is, so there is no guarantee
    // that the while loop will execute
    // use a do while loop to ensure that the block of code in the loop executes once before
    // evaluating the while condition

    std::cout << "The number is " << number << '\n';

    return 0;
}
