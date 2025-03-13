#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    int number;
    std::cin >> number;

    for ( int i = 0; i < number; i++ ) {
        double n1, n2, n3;
        std::cin >> n1 >> n2 >> n3;
        const double media = ( ( n1 * 2 ) + ( n2 * 3 ) + ( n3 * 5 ) ) / ( 2 + 3 + 5 );
        std::cout << media << std::endl;
    }

    return 0;

}
