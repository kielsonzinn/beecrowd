#include <iostream>

int main() {

    int qt, num;

    std::cin >> qt;

    int in = 0;

    for ( int i = 0; i < qt; i++ ) {
        std::cin >> num;

        if ( num >= 10 && num <= 20 ) {
            in += 1;
        }
    }

    std::cout << in << " in" << std::endl;
    std::cout << ( qt - in ) << " out" << std::endl;

    return 0;

}
