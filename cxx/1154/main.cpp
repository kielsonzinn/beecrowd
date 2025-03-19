#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );

    int count = 0, soma = 0;

    while ( true ) {

        int idade;
        std::cin >> idade;

        if ( idade <= 0 ) {
            break;
        }

        soma += idade;
        count += 1;

    }

    const double media = count > 0 ? soma / double(count) : 0.00;

    std::cout << media << std::endl;

    return 0;

}
