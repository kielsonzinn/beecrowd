#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a = 0, b = 1;

    for ( int i = 0; i < n; i++ ) {
        if ( i == 0 ) {
            std::cout << a;
            continue;
        }

        if ( i == 1 ) {
            std::cout << " " << b;
            continue;
        }
        int c = a + b;
        std::cout << " " << c;
        a = b;
        b = c;
    }

    std::cout << std::endl;

    return 0;

}
