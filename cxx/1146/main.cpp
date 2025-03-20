#include <iostream>

int main() {

    while ( true ) {

        int qt;
        std::cin >> qt;

        if ( qt == 0 ) {
            break;
        }

        for ( int i = 1; i <= qt; i++ ) {
            std::cout << i;

            if ( i < qt ) {
                std::cout << " ";
            }
        }

        std::cout << std::endl;

    }

    return 0;

}