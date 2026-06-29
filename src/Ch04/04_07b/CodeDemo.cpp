// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(1.5, -4.0));
    points.push_back(std::complex<double>(12.2, -1.3));
    points.push_back(std::complex<double>(-5.0, 1.2));

    std::cout << "Real: " << points.begin()->real() << std::endl;
    std::cout << "Img at 1: " << points[1].real() << std::endl;
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;
    std::cout << "Last Img: " << (points.end())->imag() << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
