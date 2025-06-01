#include <iostream>

int main(void){

    std::string students[] = {"Randy", "Lahey", "Bubbles", "Julian"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i<(sizeof(students) / sizeof(students[0])); i++){
        std::cout << students[i] << '\n';
    }

    return 0;
}
