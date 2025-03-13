#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double a, b, c;

    std::cin >> a >> b >> c;

    constexpr const double PI = 3.14159;

    const double triangulo = a * c / 2;
    const double circulo = std::pow( c, 2 ) * PI;
    const double trapezio = ( ( a + b ) * c ) / 2;

    const double quadrado = b * b;
    const double retangulo = a * b;

    std::cout << std::fixed << std::setprecision( 3 );

    std::cout << "TRIANGULO: " << triangulo << std::endl;
    std::cout << "CIRCULO: " << circulo << std::endl; //
    std::cout << "TRAPEZIO: " << trapezio << std::endl; //
    std::cout << "QUADRADO: " << quadrado << std::endl;
    std::cout << "RETANGULO: " << retangulo << std::endl;

    return 0;
}
