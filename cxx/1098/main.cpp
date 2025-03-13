#include <iostream>

int main() {

    double i = 0, j = 1;
    int count = 1;

    while ( i <=2 ) {
        std::cout << "I=" << i << " J=" << j << std::endl;

        j += 1.00;
        count += 1;

        if ( count > 3 ) {
            count = 1;
            i += 0.2;
            j = i + 1;
        }
    }

    return 0;

}
