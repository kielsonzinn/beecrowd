#include <iostream>

int main() {

    int qt;
    int menor;
    int pos = -1;
    bool first = true;

    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {
        int num;
        std::cin >> num;

        if ( first || num < menor ) {
            menor = num;
            pos = i;
            first =  false;
        }
    }

    std::cout << "Menor valor: " << menor << std::endl;
    std::cout << "Posicao: " << pos << std::endl;

    return 0;

}
