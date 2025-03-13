#include <iostream>

int main() {

    int count = 0;

    for ( int i = 0; i < 5; i++ ) {
        int num;
        std::cin >> num;

        if ( num % 2 == 0 || ( num * -1 ) % 2 == 0 ) {
            count += 1;
        }
    }

    std::cout << count << " valores pares" << std::endl;

    return 0;

}