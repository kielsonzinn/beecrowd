#include <iostream>

int lerNumero( const int& min ) {

    while ( true ) {
        int num;
        std::cin >> num;

        if ( num > min ) {
            return num;
        }
    }

}

int main() {

    int x;
    std::cin >> x;

    int z = lerNumero( x );
    int soma = 0, i = 0;

    while ( true ) {
        soma += x + i;
        if ( soma > z ) {
            break;
        }
        i++;
    }

    std::cout << ( i + 1 ) << std::endl;

    return 0;

}
