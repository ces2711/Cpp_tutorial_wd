#include <iostream>

/*
int max(int x, int y){
    return (x > y) ? x : y;
}

double max(double x, double y){
    return (x > y) ? x : y;
}

char max(char x, char y){
    return (x > y) ? x : y;
}
*/ // replace the above with the below function prototype
// use "T" to return "thing", can be multiple data types

template <typename T, typename U>
// this defines "T" as a typename, so that you can use T in the function prototype
// define "U" so that function can accept and compare multiple datatypes

auto max(T x, U y){
    return (x > y) ? x : y;
}

// auto = compile will determine what return type to use

int main(void){
    // function templates describe what a function looks like
    // can be used to generate as many overloaded functions as needed
    // each using different datatypes
    // overloaded functions = 2+ functions with the same name and different input/output datatypes

    std::cout << max(1, 2.1) << '\n';

    return 0;
}
