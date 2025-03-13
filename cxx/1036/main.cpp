#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double a, b, c;

    std::cin >> a >> b >> c;

    const double delta = std::pow( b, 2 ) - ( 4 * a * c );

    if ( a == 0 || delta < 0 ) {
        std::cout << "Impossivel calcular" << std::endl;

    } else {

        const double x1 = ( ( b * -1 ) + std::sqrt( delta ) ) / ( 2 * a );
        const double x2 = ( ( b * -1 ) - std::sqrt( delta ) ) / ( 2 * a );

        std::cout << std::fixed << std::setprecision( 5 );

        std::cout << "R1 = " << x1 << std::endl;
        std::cout << "R2 = " << x2 << std::endl;

    }

    return 0;
}
