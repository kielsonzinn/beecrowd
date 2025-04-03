#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    int line;
    char operacao;
    double matriz[12][12], sum = 0;

    std::cin >> line;
    std::cin >> operacao;

    for ( int i = 0; i < 12; i++ ) {
        for ( int j = 0; j < 12; j++ ) {
            std::cin >> matriz[i][j];
            if ( i == line ) {
                sum += matriz[i][j];
            }
        }
    }

    if ( operacao == 'S' ) {
        std::cout << sum << std::endl;
    } else {
        std::cout << sum / 12.0 << std::endl;
    }

    return 0;
}
