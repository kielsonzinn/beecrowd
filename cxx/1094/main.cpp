#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 2 );

    int quant;
    std::cin >> quant;

    int total = 0, rato = 0, sapo = 0, coelho = 0;

    for ( int i = 0; i < quant; i++ ) {
        char animal;
        int quantAnimal;

        std::cin >> quantAnimal >> animal;

        switch ( animal ) {
            case 'R': //Rato
                rato += quantAnimal;
                break;
            case 'S': //Sapo
                sapo += quantAnimal;
                break;
            case 'C': //Coelho
                coelho += quantAnimal;
                break;
        }

        total += quantAnimal;
    }

    std::cout << "Total: " << total << " cobaias" << std::endl;
    std::cout << "Total de coelhos: " << coelho << std::endl;
    std::cout << "Total de ratos: " << rato << std::endl;
    std::cout << "Total de sapos: " << sapo << std::endl;
    std::cout << "Percentual de coelhos: " << ( coelho * 100.00 / total ) << " %" << std::endl;
    std::cout << "Percentual de ratos: " << ( rato * 100.00 / total ) << " %" << std::endl;
    std::cout << "Percentual de sapos: " << ( sapo * 100.00 / total ) << " %" << std::endl;

    return 0;

}
