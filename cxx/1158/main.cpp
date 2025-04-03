#include <iostream>

int main() {

    int n;
    std::cin >> n;

    for ( int i = 0; i < n; i++ ) {

        int a1, a2;
        std::cin >> a1 >> a2;

        if ( a1 % 2 == 0 ) {
            a1 += 1;
        }

        int soma = 0;
        for ( int j = 0; j < a2; j++ ) {
            soma += a1;
            a1 += 2;
        }

        std::cout << soma << std::endl;

    }

    return 0;
}
