#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );

    double salario;
    std::cin >> salario;

    int percentual;

    if ( salario <= 400.00 ) {
        percentual = 15.00;

    } else if ( salario <= 800.00 ) {
        percentual = 12.00;

    } else if ( salario <= 1200.00 ) {
        percentual = 10.00;

    } else if ( salario <= 2000.00 ) {
        percentual = 7.00;

    } else {
        percentual = 4.00;
    }

    const double reajuste = salario / 100 * percentual;
    const double novoSalario = salario + reajuste;

    std::cout << "Novo salario: " << novoSalario << std::endl;
    std::cout << "Reajuste ganho: " << reajuste << std::endl;
    std::cout << "Em percentual: " << percentual << " %" << std::endl;

    return 0;

}
