#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );

    double a, b;
    std::cin >> a >> b;

    double aumento = ( b - a ) * 100.00 / a;

    std::cout << aumento << "%" << std::endl;

    return 0;

}
