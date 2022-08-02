#include <iostream>

std::string concatStrings (std::string stringOne, std::string stringTwo);
int main () {

    std::string firstName = "Anthony";
    std::string lastName = "Gonzo";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << fullName;

    return 0;
}
std::string concatStrings (std::string stringOne, std::string stringTwo){
    return stringOne + " " + stringTwo;
}