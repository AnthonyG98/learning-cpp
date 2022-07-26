#include <iostream>

int main () {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);



    std::cout << "Hello " << name.erase(0, 2);

    return 0;
}