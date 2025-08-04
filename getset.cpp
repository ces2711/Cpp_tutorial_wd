#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    Stove(int temperature){
        setTemperature(temperature);
    }

    int getTemperature(){
        return temperature;
    }

    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main(void){

    // abstraction = hiding unnecessary data from outside of a class
    // getter = function that makes a private attribute readable
    // setter = function that makes a private attribute writeable

    Stove stove(0);

    // stove.temperature = 1000000; cant do this because temperature is private

    stove.setTemperature(1000000); // get/set methods inside class allows checks/logic preventing
    // invalid inputs

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}
