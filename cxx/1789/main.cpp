#include <iostream>

int main() {

    int qt;
    while ( std::cin >> qt ) {

        int max = 0;

        for ( int i = 0; i < qt; i++ ) {
            int run;
            std::cin >> run;

            if ( run > max ) {
                max = run;
            }
        }

        if ( max < 10 ) {
            std::cout << 1 << std::endl;

        } else if ( max >= 10 && max < 20 ) {
            std::cout << 2 << std::endl;

        } else {
            std::cout << 3 << std::endl;
        }

    }
    return 0;
}