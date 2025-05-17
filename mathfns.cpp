#include <iostream>
#include <cmath>

// www.cplusplus.com/reference/cmath lists all of the functions available in cmath

int main(void){
    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x,y); // give the max of two values (iostream)
    z = std::min(x,y); // give the min of two values (iostream)

    z = pow(2,3); // rase 2 to the power of 3
    z = sqrt(9); // take the square root
    z = abs(-5); // give absolute value
    z = round(x); // round value
    z = ceil(x); // ceiling rounding
    z = floor(x); // floor rounding


    std::cout << z << '\n';
    return 0;
}
