#include <iostream>
/*
struct = A structure that group related variables under one name 
            structs can contain many diffrent data types (strings, int, double)
            variables in a struct are known as "members".
            vaiables in a struct can be accessed with '.' "Class member Access Operator".
*/
struct student {
    std::string name;
    double gpa;
    bool enrolled;
};
int main () { 
    student studentOne;
    studentOne.name = "Spongebob";
    studentOne.gpa = 3.4;
    studentOne.enrolled = true;

    student studentTwo;
    studentTwo.name = "Patrick";
    studentTwo.gpa = 3.0;
    studentTwo.enrolled = true;

    std::cout << studentOne.name << '\n';
    std::cout << studentOne.gpa << '\n';
    std::cout << studentOne.enrolled << '\n';

    std::cout << studentTwo.name << '\n';
    std::cout << studentTwo.gpa << '\n';
    std::cout << studentTwo.enrolled << '\n';

    return 0;
}
