#include <iostream>

int main() {

    for ( int i = 0; i < 10; i++ ) {
        int x;
        std::cin >> x;
        if ( x<=0 ) {
            x = 1;
        }
        std::cout << "X[" << i << "] = " << x << std::endl;
    }

    return 0;
}
