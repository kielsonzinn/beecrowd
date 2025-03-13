#include <iostream>

bool ok( const int a, const int b, const int c, const int d ) {

    if ( !( b > c && d > a ) ) {
        return false;
    }

    if ( !( ( c + d ) > ( a + b ) ) ) {
        return false;
    }

    if ( !( c >= 0 && d >= 0 ) ) {
        return false;
    }

    if ( !( a % 2 == 0 ) ) {
        return false;
    }

    return true;

}

int main() {

    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    if ( ok( a, b, c, d ) ) {
        std::cout << "Valores aceitos" << std::endl;

    } else {
        std::cout << "Valores nao aceitos" << std::endl;
    }

    return 0;
}
