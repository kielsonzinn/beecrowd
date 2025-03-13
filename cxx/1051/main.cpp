#include <iostream>
#include <iomanip>

int main() {

    double salario;
    std::cin >> salario;

    double imposto = 0; 00;

    if ( salario > 4500.00 ) {
        double sobra = salario - 4500.00;
        imposto += sobra / 100 * 28.00;

        salario = 4500.00;
    }

    if ( salario > 3000.00 ) {
        double sobra = salario - 3000.00;
        imposto += sobra / 100 * 18.00;

        salario = 3000.00;
    }

    if ( salario > 2000.00 ) {
        double sobra = salario - 2000.00;
        imposto += sobra / 100 * 8.00;

        salario = 2000.00;
    }

    if ( imposto > 0.00 ) {

        std::cout << std::fixed << std::setprecision( 2 );
        std::cout << "R$ " << imposto << std::endl;

    } else {
        std::cout << "Isento" << std::endl;

    }

    return 0;

}
