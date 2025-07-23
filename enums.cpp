#include <iostream>

enum Day {Sunday = 0, Monday = 1, Tuesday = 2,
             Wednesday = 3, Thursday = 4, Friday = 5 , Saturday = 6};

int main(void){
    // enum is a user defined datatype that consists of paired namber integer constants
    // great if you have a set of potential options

    // std::string today = "Sunday";
    // can't use the above because switch cases do not accept strings

    Day today = Sunday;

    switch(today){
        case Sunday: std::cout << "It is Sunday!\n";
            break;
        case Monday: std::cout << "It is Monday!\n";
            break;
        case Tuesday: std::cout << "It is Tuesday!\n";
            break;
        case Wednesday: std::cout << "It is Wednesday!\n";
            break;
        case Thursday: std::cout << "It is Thursday!\n";
            break;
        case Friday: std::cout << "It is Friday!\n";
            break;
        case Saturday: std::cout << "It is Saturday!\n";
            break;
    }

    return 0;
}
