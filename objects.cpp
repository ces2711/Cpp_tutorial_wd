#include <iostream>

// class is like struct, but class can contain methods (functions within the class)

class Human{
    public: // publicly accessible attributes and methods
        // below are attributes of the class
        // assign the attributes in the class definition for default values
        std::string name;
        std::string occupation;
        int age;

        // the below are methods of the class
        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You step on the gas\n";
        }
        void brake(){
            std::cout << "You step on the brakes\n";
        }
};

int main(void){

    // object = a collection of attributes and methods
    // can have characteristics and be used to perform actions
    // can be used to mimic real world items (phone, book, etc)
    // create from a class which acts as a blueprint

    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    Human human2;
    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Silver";

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}
