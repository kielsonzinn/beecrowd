#include <iostream>
#include <string>

constexpr const int AMBOS_GANHAM = 1;
constexpr const int NINGUEM_GANHA = 2;
constexpr const int AMBOS_PERDEM = 3;
constexpr const int VITORIA = 4;
constexpr const int DERROTA = 5;

int convert( const std::string& first, const std::string& second ) {

    if ( first == "papel" && second == "papel" ) {
        return AMBOS_GANHAM;
    }

    if ( first == "pedra" && second == "pedra" ) {
        return NINGUEM_GANHA;
    }

    if ( first == "ataque" && second == "ataque" ) {
        return AMBOS_PERDEM;
    }

    if ( first == "ataque" ) {
        if ( second == "pedra" || second == "papel" ) {
            return VITORIA;
        }
    }

    if ( first == "pedra" ) {
        if ( second == "papel" ) {
            return VITORIA;
        }
    }

    return DERROTA;

}

int main() {

    int qt;
    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {

        std::string first, second;
        std::cin >> first >> second;

        switch ( convert( first, second ) ) {
            case AMBOS_GANHAM:
                std::cout << "Ambos venceram" << std::endl;
                break;
            case NINGUEM_GANHA:
                std::cout << "Sem ganhador" << std::endl;
                break;
            case AMBOS_PERDEM:
                std::cout << "Aniquilacao mutua" << std::endl;
                break;
            case VITORIA:
                std::cout << "Jogador 1 venceu" << std::endl;
                break;
            case DERROTA:
                std::cout << "Jogador 2 venceu" << std::endl;
                break;
        }

    }

    return 0;
}
