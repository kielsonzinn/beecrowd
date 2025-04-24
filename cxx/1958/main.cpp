#include <iostream>
#include <iomanip>

int main() {
    double num;
    std::cin >> num;

    std::cout << std::uppercase
              << std::scientific
              << std::setprecision( 4 )
              << std::showpos
              << std::setw( 0 );

    std::cout << num << std::endl;

    return 0;
}
