#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    double a, b, c;
    std::cin >> a >> b >> c;

    std::vector<double> numbers = { a, b, c };
    std::sort( numbers.begin(), numbers.end() );

    c = numbers[0];
    b = numbers[1];
    a = numbers[2];

    if ( a >= b + c ) {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;

    } else {

        double a2 = std::pow( a, 2 );
        double b2 = std::pow( b, 2 );
        double c2 = std::pow( c, 2 );

        if ( a2 == b2 + c2 ) {
            std::cout << "TRIANGULO RETANGULO" << std::endl;
        }

        if ( a2 > b2 + c2 ) {
            std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
        }

        if ( a2 < b2 + c2 ) {
            std::cout << "TRIANGULO ACUTANGULO" << std::endl;
        }

        if ( a == b && a == c ) {
            std::cout << "TRIANGULO EQUILATERO" << std::endl;
        }

        if ( ( a == b && a != c ) || ( a == c && a != b ) || ( a != b && b == c ) ) {
            std::cout << "TRIANGULO ISOSCELES" << std::endl;
        }
    }

    return 0;

}
