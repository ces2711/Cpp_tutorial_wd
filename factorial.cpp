#include <iostream>

int factorialIter(int num);
int factorialRec(int num);

int main(void){

    std::cout << factorialIter(10) << '\n';
    std::cout << factorialRec(10);

    return 0;
}

int factorialIter(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

int factorialRec(int num){
    if(num > 1){
        return num * factorialRec(num - 1);
    }
    else{
        return 1;
    }
}