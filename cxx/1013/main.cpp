#include <iostream>

int main() {

    int a, b, c;

    std::cin >> a >> b >> c;

    int maior = a;

    if ( b > maior ) {
        maior = b;
    }

    if ( c> maior ) {
        maior = c;
    }

    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}
