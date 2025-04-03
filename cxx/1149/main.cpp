#include <iostream>

int lerNumero() {

    while ( true ) {
        int num;
        std::cin >> num;

        if ( num > 0 ) {
            return num;
        }
    }

}

int main() {

    int a;
    std::cin >> a;

    int n = lerNumero(), soma = 0;

    for ( int i = 0; i < n; i++ ) {
        soma += ( a + i );
    }

    std::cout << soma << std::endl;

    return 0;

}
