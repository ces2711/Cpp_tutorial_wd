#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(void){
    // struct = a structure that groups related variables under one name
    // structs can contain multiple data types
    // variables in a struct are known as members
    // members can be acccessed with a . "class member access operator"

    student student1;
    student1.name = "Conor";
    student1.gpa = 3.9;
    student1.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    return 0;
}
