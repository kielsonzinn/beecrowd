#include <iostream>

int main() {

    int c1, c2;
    std::cin >> c1 >> c2;

    if ( c1 == c2 ) {
        std::cout << c1 << std::endl;

    } else {
        std::cout << ( c1 > c2 ? c1 : c2 ) << std::endl;
    }

    return 0;

}
