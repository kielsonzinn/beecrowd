#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    int column;
    char operation;
    std::cin >> column >> operation;
    double matriz[12][12];

    for ( int i = 0; i < 12; i++ ) {
        for ( int j = 0; j < 12; j++ ) {
            double num;
            std::cin >> num;

            matriz[i][j] = num;
        }
    }

    double soma = 0.00;

    for ( int i = 0; i < 12; i++ ) {
        soma += matriz[i][column];
    }

    if ( operation == 'M' ) {
        soma /= 12;
    }

    std::cout << soma << std::endl;

    return 0;
}
