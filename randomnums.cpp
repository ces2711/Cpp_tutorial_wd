#include <iostream>
#include <ctime>

int main(void){

    // pseudo random numbers (not truly random)

    srand(time(NULL)); // seeds the RNG with the current time

    int num = (rand() % 6) + 1; // modulus of the range of numbers you want

    // for a dice roll, mod 6 + 1 gives a random number between 1 and 6

    std::cout << num;

    return 0;
}
