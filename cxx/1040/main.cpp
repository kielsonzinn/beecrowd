#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::fixed << std::setprecision( 1 );

    double n1, n2, n3, n4;
    std::cin >> n1 >> n2 >> n3 >> n4;

    double media = ( ( n1 * 2 ) + ( n2 * 3 ) + ( n3 * 4 ) + ( n4 * 1 ) ) / ( 2 + 3 + 4 + 1 );

    std::cout << "Media: " << media << std::endl;

    if ( media >= 7.0 ) {
        std::cout << "Aluno aprovado." << std::endl;

    } else if ( media < 5.0 ) {
        std::cout << "Aluno reprovado." << std::endl;

    }

    if ( media >= 5.0 && media <= 6.9 ) {
        std::cout << "Aluno em exame." << std::endl;

        double exame;
        std::cin >> exame;

        media = ( media + exame ) / 2;

        std::cout << "Nota do exame: " << exame << std::endl;

        if ( media >= 5.0 ) {
            std::cout << "Aluno aprovado." << std::endl;

        } else if ( media <= 4.9 ) {
            std::cout << "Aluno reprovado." << std::endl;
        }

        std::cout << "Media final: " << media << std::endl;
    }

    return 0;

}
