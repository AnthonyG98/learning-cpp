#include <iostream>

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
                break;
            case 3: balance += deposit();
                break;
            case 4: std::cout << "Thanks for stopping by! \n";
                break;
            default: std::cout << "Invalid choice";
        }
   }
    while(choice != 4);

    return 0;
}

