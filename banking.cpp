#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(void){
    
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); //reset error flags
        fflush(stdin); // clear the input buffer

        switch(choice){
            case 1: 
                showBalance(balance);
                break;
            case 2: 
                balance += deposit();
                showBalance(balance);
                break;
            case 3: 
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!\n";
                break;
            default:
                std::cout << "Invalid Choice\n";
                break;
        }
    }while(choice != 4);


    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" <<std::setprecision(2) << std::fixed << balance << '\n';
    // this is from the iomanip header file - setprecision sets the decimal places to output
}
double deposit(){
    
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0 ){
        return amount;
    }
    else{
        std::cout << "That is not a valid amount. ";
        return 0;
    }
}

double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient Funds\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That is not a valid amount. ";
        return 0;
    }
    else{
        return amount;
    }
}
