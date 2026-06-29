// Complete Guide to C++ Programming Foundations
// Exercise 05_06
// Traditional For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> lapTimes = {92, 85, 88, 90, 87};
    float average = 0.0f;

    std::cout << "Average " << average << std::endl;

    for (auto x : lapTimes){
    // for(int i =0; i < lapTimes.size(); i++){
        average += x;
    }
    average /= lapTimes.size();

    std::cout << "Average " << average << std::endl;

    int x=5, y=4;
    std::cout << "Test " << (x & y) << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
