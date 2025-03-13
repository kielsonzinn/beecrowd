#include <iostream>

int main() {

    int countPares = 0, countImpares = 0, countPositivo = 0, countNegativo = 0;

    for ( int i = 0; i < 5; i++ ) {
        int num;
        std::cin >> num;

        if ( num % 2 == 0 || ( num * -1 ) % 2 == 0 ) {
            countPares += 1;
        } else {
            countImpares += 1;
        }

        if ( num > 0 ) {
            countPositivo += 1;

        } else if ( num < 0 ) {
            countNegativo += 1;
        }

    }

    std::cout << countPares << " valor(es) par(es)" << std::endl;
    std::cout << countImpares << " valor(es) impar(es)" << std::endl;
    std::cout << countPositivo << " valor(es) positivo(s)" << std::endl;
    std::cout << countNegativo << " valor(es) negativo(s)" << std::endl;

    return 0;

}