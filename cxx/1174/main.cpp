#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    for ( int i =0; i < 100; i++ ) {
        double num;
        std::cin >> num;

        if ( num <= 10.00 ) {
            std::cout << "A[" << i << "] = " << num << std::endl;
        }
    }

    return 0;

}
