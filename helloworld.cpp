#include <iostream>

namespace first {
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    using namespace std;
    /*Namespace: 
    provides a solution for preventing name conflicts in a
    large project. Each entity needs a unique name. A namespace
    allows for identically named entities as long as the namespaces are different
    */ 
   string name = "Bro";

   cout << name; //:: scope resolution operator

    return 0;
}