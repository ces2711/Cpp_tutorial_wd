#include <iostream>

int main(void){

    // type conversion = conversion of value of one datatype to another
    // can be implicitly or explicitly

    double x = (int) 3.14;
    std::cout << x << '\n';
    // this is explicitly casting the double x as an integer
    // output will be truncated

    char y = 100;
    std::cout << y << '\n';
    // this will implicity cast 100 as a character, or d in the ASCII table

    std::cout << (char) 100 << '\n';
    // this is an explicit cast of the same thing

    int correct = 8;
    int questions = 10;

    double score = correct / questions * 100;
    // this is doing integer division, but then the result is a double
    // 8/10 = 0.8 --> 0 as an int
    // instead, need to cast one of the variables as a double before doing division

    score = (double) correct / questions * 100;
    // this should correctly display 80%

    std::cout << score << "%" << '\n';

    return 0;
}
