#include <iostream>

int main() {

    while ( true ) {

        int x;
        std::cin >> x;

        if ( x == 0 ) {
            break;
        }

        int soma = 0;

        if ( x % 2 != 0 ) {
            x += 1;
        }

        for ( int i = 0; i < 5; i++ ) {
            soma += x;
            x += 2;
        }

        std::cout << soma << std::endl;

    }

    return 0;
}
