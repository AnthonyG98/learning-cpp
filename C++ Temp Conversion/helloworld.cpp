#include <iostream>
#include <iomanip>
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main () { 
    double balance = 0;
    int choice = 0;
   do {
        std::cout << "******************* \n";
        std::cout << "Enter your choice \n";
        std::cout << "******************* \n";

        std::cout << "1. Show Balance \n";
        std::cout << "2. Make a withdrawl \n";
        std::cout << "3. Make a deposit \n";
        std::cout << "4. Exit \n";

        std::cin >> choice;
    
        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance -= withdraw(balance);
                        showBalance(balance);
                break;
            case 3: balance += deposit();
                        showBalance(balance);
                break;
            case 4: std::cout << "Thanks for stopping by! \n";
                break;
            default: std::cout << "Invalid choice";
        }
   }
    while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is $"<< std::setprecision(2) <<std::fixed << balance << '\n';
}
double deposit(){
    double amount = 0;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
       if(amount > 0){
        return amount;
        } else {
            std::cout << "Not a valid amount";
            return 0;
        }
}   
double withdraw(double balance){
    double withdrawl = 0;
    std::cout << "Enter amount you'd like to withdrawl: ";
    std::cin >> withdrawl;
    if(withdrawl > balance){
        std::cout << "Insufficient funds!";
        return 0;
    } else {
        return withdrawl;
    }
    return 0;
}