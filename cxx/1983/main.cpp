#include <iostream>

int main() {

    int qt;
    std::cin >> qt;

    int best = -1;
    double maxima = 0.00;

    for ( int i = 0; i < qt; i++ ) {

        double nota;
        int matricula;

        std::cin >> matricula >> nota;

        if ( nota < 8.0 ) {
            continue;
        }

        if ( nota > maxima ) {
            maxima = nota;
            best = matricula;
        }

    }

    if ( best != -1 ) {

        std::cout << best << std::endl;

    } else {

        std::cout << "Minimum note not reached" << std::endl;

    }

    return 0;

}
