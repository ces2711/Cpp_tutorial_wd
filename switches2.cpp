#include <iostream>

int main(void){
    
    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;
    

    switch(grade){
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good!";
            break;
        case 'C':
            std::cout << "You did average!";
            break;
        case 'D':
            std::cout << "You did poorly!";
            break;
        case 'F':
            std::cout << "You failed!";
            break;
        default:
            std::cout << "Please enter a valid grade (A-F)\n";
    }

    return 0;
}
