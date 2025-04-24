#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );

    double volume, diametro;

    while ( std::cin >> volume && std::cin >> diametro ) {

        double area = 3.14 * std::pow( diametro / 2, 2 );
        double altura = volume / area;

        std::cout << "ALTURA = " << altura << std::endl;
        std::cout << "AREA = " << area << std::endl;

    }

    return 0;

}