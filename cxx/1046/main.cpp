#include <iostream>

int main() {
    int start, end;
    std::cin >> start >> end;

    int duracao;

    if ( end > start ) {
        duracao = end - start;

    } else {
        duracao = ( 24 - start ) + end;
    }

    std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;

    return 0;

}