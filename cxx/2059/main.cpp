#include <iostream>

int main() {

    int jog1, num1, num2, roubou, acusou;
    std::cin >> jog1 >> num1 >> num2 >> roubou >> acusou;

    int jogadorQueGanhou;
    int soma = num1 + num2;

    if ( acusou ) {
        jogadorQueGanhou = roubou ? 2 : 1;

    } else if ( roubou ) {
        jogadorQueGanhou = 1;

    } else {
        jogadorQueGanhou = ( jog1 == 1 && ( soma % 2 == 0 ) ) || ( jog1 == 0 && ( soma % 2 != 0 ) ) ? 1 : 2;
    }

    std::cout << "Jogador " << jogadorQueGanhou << " ganha!" << std::endl;

    return 0;

}