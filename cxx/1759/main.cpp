#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for ( int i = 0; i< ( n - 1 ); i++ ) {
        std::cout << "Ho ";
    }

    if ( n > 0 ) {
        std::cout << "Ho!" << std::endl;
    }

    return 0;
}
