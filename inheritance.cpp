#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "The dog goes woof\n";
        }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "The cat goes meow\n";
    }
};

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * radius * radius;
        this->volume = 1.333 * 3.14159 * radius * radius * radius;
    }
};

int main(void){

    // inheritance = a class can receive attributes and methods from another class
    // children classes inherit from a parent class
    // helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    std::cout << dog.alive <<'\n';
    dog.eat();
    dog.bark();

    // cat.bark(); this wont work because the .bark() method is not inherited by the Cat class
    cat.meow();

    Cube cube(10);
    std::cout << "Area: " << cube.area << " cm^2\n";
    std::cout << "Volume: " << cube.volume << " cm^3\n";

    Sphere sphere(5);
    std::cout << "Area: " << sphere.area << " cm^2\n";
    std::cout << "Volume: " << sphere.volume << " cm^3\n";

    
    return 0;
}
