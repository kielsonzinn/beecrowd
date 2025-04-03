#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );
    double s = 0;

    for ( int i = 1; i <= 100; i++ ) {
        s += 1.00 / i;
    }

    std::cout << s << std::endl;

    return 0;
}