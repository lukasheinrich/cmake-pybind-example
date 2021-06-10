#include <iostream>
#include "myclass.h"

int main(){
    std::cout << "hello" << std::endl;

    MyClass c(2);
    c.add(3);
    std::cout << c.add(3) << std::endl;

    return 0;
}