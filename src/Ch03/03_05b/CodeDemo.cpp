// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10;

    // Subtraction assignment
    ammo -= 5;

    // Multiplication assignment
    incoming_zombies *= 2;

    // Division assignment
    ammo /= 2;

    // Remainder assignment
    ammo %= 6;

    std::cout << std::endl << std::endl;
    return 0;
}
