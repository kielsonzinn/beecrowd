#include <iostream>

int main() {

    int n;
    std::cin >> n;

    for ( int i = 0; i < 10; i++ ) {
        std::cout << "N[" << i << "] = " << n << std::endl;
        n *= 2;
    }

    return 0;

}
