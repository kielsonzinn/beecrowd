#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;

    const double distancia = std::sqrt( std::pow( x2 - x1, 2 ) + std::pow( y2 - y1, 2 ) );

    std::cout << std::fixed << std::setprecision( 4 );
    std::cout << distancia << std::endl;

    return 0;
}
