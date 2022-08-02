#include <iostream>
#include <ctime>
int main () {
    srand(time(0));
    int randNum = rand() % 10 + 1;
    int myGuess;
    std::cout << "GUESS THAT NUMBER! \n";
    std::cout << "Guess a number between 1 and 10: ";
    std::cin >> myGuess;

    while(myGuess != randNum){
        std::cout << "Try guessing again! ";
        std::cin >> myGuess;
    };
    
    if(myGuess == randNum){
        std::cout << "You guessed correctly!";
    }

    return 0;
}