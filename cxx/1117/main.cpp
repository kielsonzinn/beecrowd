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

int main() {
    std::cout << std::fixed << std::setprecision( 2 );

    double a1 = readNota(), a2 = readNota();
    double media = ( a1 + a2 ) / 2.0;

    std::cout << "media = " << media << std::endl;

    return 0;

}