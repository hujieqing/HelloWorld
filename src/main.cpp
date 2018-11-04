#include <iostream>
#include "add.h"
//Example of forward declaration: add(int, int) is "defined" after "main"
// We are "declaring" the following prototype so that main can refer to it

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The result of adding 3 and 4 is: "<<add(3, 4)<<std::endl;
    return 0;
}
