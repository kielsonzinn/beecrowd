#include <stdio.h>
#include <iostream>
#include <iomanip>

int main() {

    double raio;

    std::cin >> raio;

    double pi = 3.14159;
    double area = ( 4.00 / 3.00 ) * pi * ( raio * raio * raio );

    std::cout << std::fixed << std::setprecision( 3 );
    std::cout << "VOLUME = " << area << std::endl;

    return 0;
}