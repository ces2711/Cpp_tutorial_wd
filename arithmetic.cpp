#include <iostream>

int main(void){
    // arithmetic operators return the result of a
    // specific arithmetic operation

    int students = 20;

    students+=2; // increment by 2
    students++; // add 1

    students-=2; // decrement by 2
    students--; // subtract 1

    students = students * 2; // multiply by 2
    students*=2; // multiply by 2

    students = students / 2; // divide by 2
    students/=2; // divide by 2

    // if you divide an int by a non-factor, it will 
    // truncate the decimal

    int remainder = students % 2;

    // modulus, gives remainder of any division
    // % 2 can easily tell you if a number is even or odd

    std::cout << students << '\n';
    std::cout << remainder << '\n';

    // operations follow PEMDAS

    int moreStudents = 6 - 5 + 4 * 3 / 2;
    // this resolves to 7

    std::cout << moreStudents << '\n';

    return 0;
}
