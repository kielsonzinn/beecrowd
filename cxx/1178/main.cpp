#include <iostream>

#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 4 );

    double x;
    std::cin >> x;

    int i = 0;

    do {
        std::cout << "N[" << i << "] = " << x << std::endl;
        x /= 2;
        i += 1;

    } while( i < 100 );

    return 0;
}
