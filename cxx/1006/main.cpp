#include <stdio.h>
#include <iostream>
#include <iomanip>

int main() {

    double a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    const double pesoA = 2.0;
    const double pesoB = 3.0;
    const double pesoC = 5.0;

    double media = ( ( a * pesoA ) + ( b * pesoB ) + ( c * pesoC ) ) / ( pesoA + pesoB + pesoC );

    std::cout << std::fixed << std::setprecision( 1 );
    std::cout << "MEDIA = " << media << std::endl;

    return 0;
}