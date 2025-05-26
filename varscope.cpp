#include <iostream>

int mynum = 3; //global variable
// best to avoid global variables if possible (pollute global namespace)
// local variables are more secure as well

void printNum(int mynum);

int main(void){
    // local variables = declared inside a function
    // global variables = declared outside of all functions

    int mynum = 1; // local
    printNum(mynum); // without arguments, this function cannot see what mynum is
    printNum(::mynum); // the :: operator selects the global version of the variable
    return 0;
}

void printNum(int mynum){
    // int mynum = 2;
    std::cout << mynum << '\n';
}
