#include <stdio.h>
#include <iomanip>
#include <iostream>

int main() {

    double porHora;
    int codigo, horas;

    std::cin >> codigo;
    std::cin >> horas;
    std::cin >> porHora;

    double salario = horas * porHora;

    std::cout << std::fixed << std::setprecision( 2 );
    std::cout << "NUMBER = " << codigo << std::endl;
    std::cout << "SALARY = U$ " << salario << std::endl;

    return 0;

}