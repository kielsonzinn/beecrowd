#include <iostream>

int main() {

    int n1, n2;

    while ( true ) {

        std::cin >> n1 >> n2;

        if ( n1 == n2 ) {
            break;
        }

        if ( n1 > n2 ) {
            std::cout << "Decrescente" << std::endl;
        } else {
            std::cout << "Crescente" << std::endl;
        }

    }

    return 0;

}
