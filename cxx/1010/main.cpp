#include <stdio.h>
#include <iostream>
#include <iomanip>

int main() {

    int codigo1, codigo2, quantidade1, quantidade2;
    double preco1, preco2;

    std::cin >> codigo1 >> quantidade1 >> preco1;
    std::cin >> codigo2 >> quantidade2 >> preco2;

    double total = ( quantidade1 * preco1 ) + ( quantidade2 * preco2 );

    std::cout << std::fixed << std::setprecision( 2 );
    std::cout << "VALOR A PAGAR: R$ " << total << std::endl;

    return 0;
}