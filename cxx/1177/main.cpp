#include <iostream>

int main() {
    int t;
    std::cin >> t;

    int x = 0;

    for ( int i = 0; i < 1000; i++ ) {
        std::cout << "N[" << i << "] = " << x << std::endl;
        x += 1;

        if ( x >= t ) {
            x = 0;
        }
    }

    return 0;
}
