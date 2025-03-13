#include <iostream>

int main() {

    int i = 1, j = 7, count = 1;

    while ( i <= 9 ) {
        std::cout << "I=" << i << " J=" << j << std::endl;

        j -= 1;
        count += 1;

        if ( count > 3 ) {
            count = 1;
            j = 7 + i + 1;
            i += 2;
        }
    }

    return 0;

}
