#include <iostream>

int main(){
    int age;
    std::cout << "Enter you age:";
    std::cin >> age;
    
    if( age >= 18){
        std::cout << "Grant access";
    } else {
        std::cout << "Access Denied";
    };
    
    return 0;
}