#include <iostream>
#include <string>

constexpr const int EMPATE = 0;
constexpr const int DERROTA = 1;
constexpr const int VITORIA = 2;

int convert( const std::string& first, const std::string& second ) {

    if ( first == second ) {
        return EMPATE;
    }

    if ( first == "tesoura" ) {
        if ( second == "papel" || second == "lagarto" ) {
            return VITORIA;
        }
    }

    if ( first == "papel" ) {
        if ( second == "pedra" || second == "Spock" ) {
            return VITORIA;
        }
    }

    if ( first == "pedra" ) {
        if ( second == "lagarto" || second == "tesoura" ) {
            return VITORIA;
        }
    }

    if ( first == "lagarto" ) {
        if ( second == "Spock" || second == "papel" ) {
            return VITORIA;
        }
    }

    if ( first == "Spock" ) {
        if ( second == "tesoura" || second == "pedra" ) {
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
            case VITORIA:
                std::cout << "Caso #" << ( i + 1 ) << ": Bazinga!" << std::endl;
                break;
            case DERROTA:
                std::cout << "Caso #" << ( i + 1 ) << ": Raj trapaceou!" << std::endl;
                break;
            case EMPATE:
                std::cout << "Caso #" << ( i + 1 ) << ": De novo!" << std::endl;
                break;
        }

    }

    return 0;
}
