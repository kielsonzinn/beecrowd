#include <iostream>
#include <iomanip>

double readNota() {

    double nota;

    while ( true ) {

        std::cin >> nota;

        if ( nota >= 0.00 && nota <= 10.00 ) {
            break;
        }

        std::cout << "nota invalida" << std::endl;

    }

    return nota;

}

bool next() {

    int opcao;

    while ( true ) {

        std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
        std::cin >> opcao;

        if ( opcao == 1 || opcao == 2 ) {
            break;
        }

    }

    return opcao == 1;

}

int main() {

    std::cout << std::fixed << std::setprecision( 2 );

    while ( true ) {
        double n1 = readNota();
        double n2 = readNota();

        const double media = ( n1 + n2 ) / 2;
        std::cout << "media = " << media << std::endl;

        if ( !next() ) {
            break;
        }
    }

    return 0;

}
