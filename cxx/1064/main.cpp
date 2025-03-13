#include <iostream>
#include <iomanip>

int main() {

    double n1, n2, n3, n4, n5, n6;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    int count = 0;
    double total = 0.00;

    for ( const double num : { n1, n2, n3, n4, n5, n6 } ) {
        if ( num > 0.00 ) {
            count += 1;
            total += num;
        }
    }

    std::cout << std::fixed << std::setprecision( 1 );
    std::cout << count << " valores positivos" << std::endl;
    std::cout << ( total / count ) << std::endl;

    return 0;

}
