#include <iostream>

int main(void){

    // foreach loop = loop that eases the traversal over an iterable dataset
    // less syntax than for loop, but only works first to last and increments by 1
    // using a for loop includes more syntax, but is more flexible

    std::string students[] = {"Randy", "Lahey", "Julian", "Ricky", "Bubbles"};

    int grades[] = {65, 84, 72, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

    for(std::string student : students){
        std::cout << student << '\n';
    }
    
    return 0;
}
