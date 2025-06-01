#include <iostream>

int main(void){
    
    // sizeof() determines the size in bytes of a variable, datatype, etc.

    std::string name = "Conor";
    double gpa = 4.0;
    char grade = 'A';
    bool student = false;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    // strings will always be 32 bytes, because they are an address of 
    // the first element in the string. The size will always be 32 bytes,
    // no matter what the string actually contains. It is a reference datatype
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    // the size of an array is the number of elements in the array times the size
    // the datatypes

    // you can use sizeof to caluclate the number of elements in an array

    std::cout << sizeof(grades) / sizeof(grades[0]) << " elements\n";

    return 0;
}
