#include <iostream>

int main() {

    int x, y;

    while ( true ) {

        std::cin >> x >> y;

        if ( x == 0 || y == 0 ) {
            break;
        }

        if ( x > 0 && y > 0 ) {
            std::cout << "primeiro" << std::endl;
            continue;
        }

        if ( x < 0 && y > 0 ) {
            std::cout << "segundo" << std::endl;
            continue;
        }

        if ( x < 0 && y < 0 ) {
            std::cout << "terceiro" << std::endl;
            continue;
        }

        if ( x > 0 && y < 0 ) {
            std::cout << "quarto" << std::endl;
            continue;
        }

    }

    return 0;

}
