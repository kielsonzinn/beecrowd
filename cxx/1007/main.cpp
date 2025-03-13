#include <stdio.h>
#include <iostream>

int main() {

    int a, b, c, d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    int diferenca = ( a * b ) - ( c * d );

    std::cout << "DIFERENCA = " << diferenca << std::endl;

    return 0;
}