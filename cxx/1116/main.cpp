#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    int n;
    std::cin >> n;

    for ( int i =0; i < n; i++ ) {
        int n1, n2;
        std::cin >> n1 >> n2;

        if ( n2 == 0 ) {
            std::cout << "divisao impossivel" << std::endl;
            continue;
        }

        const double resultado = static_cast<double>( n1 ) / n2;
        std::cout << resultado << std::endl;
    }

    return 0;

}
