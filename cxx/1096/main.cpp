#include <iostream>

int main() {

    int i = 1, j = 7;

    while ( i <= 9 ) {
        std::cout << "I=" << i << " J=" << j << std::endl;

        j -= 1;

        if ( j < 5 ) {
            j = 7;
            i += 2;
        }
    }

    return 0;

}
