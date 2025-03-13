#include <stdio.h>
#include <iostream>
#include <iomanip>

int main() {

    double raio;

    std::cin >> raio;

    const double pi = 3.14159;
    double area = pi * ( raio * raio );

    std::cout << std::fixed << std::setprecision( 4 );
    std::cout << "A=" << area << std::endl;

    return 0;
}