#include <iostream>

int main() {

    int saida, viagem, fuso;
    std::cin >> saida >> viagem >> fuso;

    int horario = saida + viagem + fuso;

    if ( horario > 23 ) {
        horario -= 24;
    } else if ( horario < 0 ) {
        horario += 24;
    }

    std::cout << horario << std::endl;

    return 0;

}