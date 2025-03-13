#include <iostream>

int main() {

    int number;
    std::cin >> number;

    for ( int i = 1; i < 10000; i++ ) {
        if ( i % number == 2 ) {
            std::cout << i << std::endl;
        }
    }

    return 0;

}
