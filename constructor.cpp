#include <iostream>

// constructor = special method that is automatically called when an object is instantiated
// useful for assigning values to attributes as arguments

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string x, int y, double gpa){
        name = x;
        age = y;
        this->gpa = gpa;

        // if the attributes have the same name as the arguments of the contstructor,
        // use the "this->" keyword. Otherwise, just use the names of the aruguments
    }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
    
    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main(void){

    Student student1("Conor", 30, 3.9);
    Student student2("Kate", 29, 3.9);

    Car car1("Chevy", "Corvette", 2022, "Blue");

    std::cout << student1.name <<'\n';
    std::cout << student1.age <<'\n';
    std::cout << student1.gpa <<'\n';
    std::cout << student2.name <<'\n';
    std::cout << student2.age <<'\n';
    std::cout << student2.gpa <<'\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';
    

    return 0;
}
