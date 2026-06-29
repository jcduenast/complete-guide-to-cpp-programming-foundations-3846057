// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush;
    /* flush  allows the input to be in the same line as the prompt */
    std::cin >> name;
    // cin works for single worded inputs
    std::cout << "Nice to meet you, " << name <<"!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}