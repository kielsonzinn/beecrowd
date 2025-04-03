#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );
    double s = 0.0;
    int denominator = 1;

    for ( int numerator = 1; numerator <= 39; numerator += 2 ) {
        s += static_cast<double>( numerator ) / denominator;
        denominator *= 2;
    }

    std::cout << s << std::endl;
    return 0;
}
