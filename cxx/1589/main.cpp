#include <iostream>

int main() {

    int qt;
    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {

        int r1, r2;
        std::cin >> r1 >> r2;

        int menor = r1 + r2;
        std::cout << menor << std::endl;

    }

    return 0;
}