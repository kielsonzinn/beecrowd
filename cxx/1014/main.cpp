#include <iostream>
#include <iomanip>

int main() {

    int kmPercorrido;
    double combustivelGasto;

    std::cin >> kmPercorrido >> combustivelGasto;

    const double consumoMedio = kmPercorrido / combustivelGasto;

    std::cout << std::fixed << std::setprecision( 3 );
    std::cout << consumoMedio << " km/l" << std::endl;

    return 0;
}
