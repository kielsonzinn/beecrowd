#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    double a, b, c;
    std::cin >> a >> b >> c;

    if ( a + b > c && a + c > b && b + c > a ) {
        const double perimetro = a + b + c;
        std::cout << "Perimetro = " << perimetro << std::endl;

    } else {
        const double area = ( ( a + b ) * c ) / 2;
        std::cout << "Area = " << area << std::endl;
    }

    return 0;

}
