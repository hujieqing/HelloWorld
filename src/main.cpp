#include <iostream>
#include "add.h"
//Example of forward declaration: add(int, int) is "defined" after "main"
// We are "declaring" the following prototype so that main can refer to it

int main() {
    std::string input;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The result of adding 3 and 4 is: "<<add(3, 4)<<std::endl;
    std::cout << "Please enter your name： ";
    getline(std::cin, input);
    std::cout<< "Hello " << input << std::endl;
    listSizes();
    return 0;
}
