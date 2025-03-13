#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    int tempoGasto, velocidade;

    std::cin >> tempoGasto >> velocidade;

    const double gasto = ( tempoGasto * velocidade ) / 12.00;

    std::cout << std::fixed << std::setprecision( 3 );
    std::cout << gasto << std::endl;

    return 0;
}
