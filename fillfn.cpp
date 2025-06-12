#include <iostream>

int main(void){
    // fill() = Fills a range of elements with a value
    // fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburgers");
    fill(foods +(SIZE/3)*2, foods + SIZE, "hot dogs");

    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}
