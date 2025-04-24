#include <iostream>
#include <vector>

int main() {

    int qt;
    std::cin >> qt;

    std::vector<bool> atacados = {};
    std::vector<long long unsigned int> estrelas = {};

    for ( int i = 0; i < qt; i++ ) {

        long long unsigned int carneiros;
        std::cin >> carneiros;
        estrelas.push_back( carneiros );
        atacados.push_back( false );

    }

    int pos = 0;

    while ( true ) {

        atacados[pos] = true;

        long long unsigned int carneiros = estrelas[pos];
        bool par = carneiros % 2 == 0;

        if ( carneiros > 0 ) {
            carneiros -= 1;
            estrelas[pos] = carneiros;
        }

        if ( par ) {
            pos -= 1;

        } else {
            pos += 1;
        }

        if ( pos < 0 || pos >= qt ) {
            break;
        }

    }

    int atacado = 0;
    long long unsigned int carneiros = 0;

    for ( int i = 0; i < qt; i++ ) {

        carneiros += estrelas[i];

        if ( atacados[i] ) {
            atacado += 1;
        }

    }

    std::cout << atacado << " " << carneiros << std::endl;

    return 0;

}
