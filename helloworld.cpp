#include <iostream>

int main(){
    char op;
    double x;
    double y;
    double result;

    std::cout << "*********** Calculator" << '\n';
    std::cout << "Enter X Value" << '\n';
    std::cin >> x;
    std::cout << "Enter Y Value" << '\n';
    std::cin >> y;
    std::cout << "/, *, +, -" << '\n';
    std::cin >> op;

    


    switch (op)
    {
        case '/':
        std::cout << x / y;
        break;
         case '*':
        std::cout << x * y;
        break;
         case '+':
        std::cout << x + y;
        break;
         case '-':
        std::cout << x - y;
        break;
        default: 
        "Please one of the operators listed.";
        break;
    }
    
    return 0;
}