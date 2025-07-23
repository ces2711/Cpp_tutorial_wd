#include <iostream>

int main(void){
    // dynamic memory = memory that is allocated after the program is compiled and running
    // use the 'new' keyword to allocate memory in the heap rather than the stack
    // useful when we don't know how much memory we will need, makes program more flexible
    // especially for user input

    int * pNum = NULL;
    char * pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in? ";
    std::cin >> size;

    pNum = new int;
    pGrades = new char[size]; // dynamically allocate heap memory depending on entered size

    for(int i = 0; i<size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; // need to delete array - memory dynamically allocated to heap, so need
    // to delete to prevent leak

    *pNum = 21;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; // need to free memory at this address
    // if using the new operator, need to free memory with delete operator later
    // if not you can cause a memory leak

    return 0;
}
