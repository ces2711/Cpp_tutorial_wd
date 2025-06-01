#include <iostream>

double getTotal(double prices[], int size);

int main(void){
    
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << '$' << total << '\n';

    return 0;
}

double getTotal(double prices[], int size){
    
    // passing an array to a function passes a pointer to the array
    // there is no way for the function to know the size of the array
    // so you need to calculate the size beforehand and pass it as
    // an argument to the function
    
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }  

    return total;
}
