#include <iostream>
#include <ctime>
int main () {
    
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1:
            std::cout << "You win a bumber sticker \n";
            break;
        case 2: 
            std::cout << "You win a free lunch \n";
            break;
        case 3: 
            std::cout << "You win a giftcard \n";
            break;
        case 4: 
            std::cout << "You win a this dick in your ass \n";
            break;
        case 5: 
            std::cout << "You win nothing! \n";
            break;
    }

    return 0;
}