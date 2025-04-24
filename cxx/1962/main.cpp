#include <iostream>

int main() {
    int qt;
    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {
        int anos;
        std::cin >> anos;

        int result = 2015 - anos;

        if ( result > 0 ) {
            std::cout << result << " D.C." << std::endl;

        } else {
            std::cout << ( result * -1 + 1 ) << " A.C." << std::endl;
        }

    }

    return 0;

}
