#include <iostream>
#include <string>

int main() {

    int qt;
    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {

        std::string jogador1, escolhaJogador1, jogador2, escolhaJogador2;

        std::cin >> jogador1 >> escolhaJogador1;
        std::cin >> jogador2 >> escolhaJogador2;

        int num1, num2;
        std::cin >> num1 >> num2;

        int soma = num1 + num2;
        std::string escolhaGanhadora = soma % 2 == 0 ? "PAR" : "IMPAR";
        #ifndef ONLINE_JUDGE
        std::cout << escolhaGanhadora << std::endl;
        #endif
        std::cout << ( escolhaJogador1 == escolhaGanhadora ? jogador1 : jogador2 ) << std::endl;

    }

    return 0;
}
