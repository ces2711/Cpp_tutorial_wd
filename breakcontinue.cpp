#include <iostream>

int main(void){
    //break = break out of loop
    //continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout<<i<<'\n';
    }


    return 0;
}
