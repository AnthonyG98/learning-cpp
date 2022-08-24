#include <iostream>


class Human {
    public: 
        std::string name;
        std::string job;
        int age;
        void eat(){
            std::cout << "This person is eating \n";
        };
        void drink(){
            std::cout << "This person is drinking \n";
        };
        void sleep(){
            std::cout << "This person is sleeping \n";
        };

};
int main () { 
    /*
    Object = a collection of attributes and methods. They can have characteristics and
    could perfom actions.
    Can be used to mimic real world items (ex. phone, book, etc).
    Created from a class which acts as a "blue-print".
    */

   Human humanOne;
   humanOne.name = "Anthony \n";
   humanOne.job = "programmer \n";
   humanOne.age = 32;

   std::cout << humanOne.name;
   std::cout << humanOne.job;
   std::cout << humanOne.age << " years old. \n";
   humanOne.eat();
   humanOne.drink();
   humanOne.sleep();



    return 0;
}
