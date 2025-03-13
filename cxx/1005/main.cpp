#include <stdio.h>
#include <iostream>
#include <iomanip>

int main() {

    double a, b;

    std::cin >> a;
    std::cin >> b;

    const double pesoA = 3.5;
    const double pesoB = 7.5;

    double media = ( ( a * pesoA ) + ( b * pesoB ) ) / ( pesoA + pesoB );

    std::cout << std::fixed << std::setprecision( 5 );
    std::cout << "MEDIA = " << media << std::endl;

    return 0;
}