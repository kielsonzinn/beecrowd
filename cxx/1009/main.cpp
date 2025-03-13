#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

int main() {

    std::string name;
    double salario;
    double vendas;

    const double comissao = 15.00;

    std::cin >> name;
    std::cin >> salario;
    std::cin >> vendas;

    double total = salario + ( vendas / 100 * comissao );

    std::cout << std::fixed << std::setprecision( 2 );
    std::cout << "TOTAL = R$ " << total << std::endl;

    return 0;
}