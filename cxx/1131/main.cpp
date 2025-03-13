#include <iostream>

int main() {
    int qtGrenal = 0, qtInter = 0, qtGremio = 0, qtEmpate = 0;

    while ( true ) {
        int golI, golG;
        std::cin >> golI >> golG;
        qtGrenal += 1;

        int option;
        std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
        std::cin >> option;

        if ( golI > golG ) {
            qtInter += 1;
        } else if ( golG > golI ) {
            qtGremio += 1;
        } else {
            qtEmpate += 1;
        }

        if ( option != 1 ) {
            break;
        }

    }

    std::cout << qtGrenal << " grenais" << std::endl;
    std::cout << "Inter:" << qtInter << std::endl;
    std::cout << "Gremio:" << qtGremio << std::endl;
    std::cout << "Empates:" << qtEmpate << std::endl;

    if ( qtGremio > qtInter ) {
        std::cout << "Gremio venceu mais" << std::endl;
    } else if ( qtInter > qtGremio ) {
        std::cout << "Inter venceu mais" << std::endl;
    } else {
        std::cout << "Nao houve vencedor" << std::endl;
    }

    return 0;

}