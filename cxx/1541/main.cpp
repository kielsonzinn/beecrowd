#include <iostream>
#include <cmath>

int main() {

    while ( true ) {

        int a, b, c;

        std::cin >> a;
        if ( a == 0 ) {
            break;
        }

        std::cin >> b;
        if ( b == 0 ) {
            break;
        }

        std::cin >> c;
        if ( c == 0 ) {
            break;
        }

        int area = a * b;
        double total = ( 100.00 * area ) / c;
        double lado  = std::sqrt( total );
        int result = std::trunc( lado );

        std::cout << result << std::endl;

    }

    return 0;
}