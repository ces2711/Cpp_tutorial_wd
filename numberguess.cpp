#include <iostream>
#include <ctime>

int main(void){

    int num, guess, tries = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    std::cout << "***** NUMBER GUESSING GAME *****\n";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too high!\n";
        }
        else if(guess < num){
            std::cout << "Too low!\n";
        }
        else{
            std::cout << "Correct! # of tries: " << tries << '\n';
        }

    }while(guess != num);

    std::cout << "*******************************\n";

    return 0;
}
