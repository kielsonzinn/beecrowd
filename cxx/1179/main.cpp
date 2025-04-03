#include <iostream>

int main() {
    int pares[5], impares[5];
    int contPar = 0, contImp = 0;

    for ( int i = 0; i < 15; i++ ) {
        int num;
        std::cin >> num;

        if ( num % 2 == 0 ) {

            pares[contPar++] = num;

            if ( contPar == 5 ) {

                for ( int j = 0; j < 5; j++ ) {
                    std::cout << "par[" << j << "] = " << pares[j] << std::endl;
                }

                contPar = 0;

            }

        } else {

            impares[contImp++] = num;

            if ( contImp == 5 ) {

                for ( int j = 0; j < 5; j++ ) {
                    std::cout << "impar[" << j << "] = " << impares[j] << std::endl;
                }

                contImp = 0;

            }

        }
    }

    for ( int j = 0; j < contImp; j++ ) {
        std::cout << "impar[" << j << "] = " << impares[j] << std::endl;
    }

    for ( int j = 0; j < contPar; j++ ) {
        std::cout << "par[" << j << "] = " << pares[j] << std::endl;
    }

    return 0;
}