#include <iostream>

// this is a credit card number validation program using the Luhn Algorithm

// 6011000990139424
// 1 2 2  0 0  1 8 2  1 8 4
// 29
//  0 1  0 9  0 3  4 4
// 21
// 29 + 21 = 50
// 50 % 10 = valid

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(void){
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid!";
    }
    else{
        std::cout << cardNumber << " is not valid!";
    }
    return 0;
}

int getDigit(const int number){
    return number % 10 + (number / 10 % 10);
};
int sumOddDigits(const std::string cardNumber){
    
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    
    return 0;
};
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
};