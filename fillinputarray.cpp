#include <iostream>

int main(void){

    std::string foods[5]; // cant change the size of an array during program
    // fix this with dynamic memory, vectors?
    int size = sizeof(foods)/sizeof(foods[0]);

    std::string temp;

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }

    }

    std::cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}
