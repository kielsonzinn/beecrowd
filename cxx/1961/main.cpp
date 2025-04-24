#include <iostream>
#include <cmath>

int main() {
    int altura, canos;
    std::cin >> altura >> canos;

    int last = -1;
    bool perdeu = false;

    for ( int i = 0; i < canos; i++ ) {
        int corrente;
        std::cin >> corrente;

        if ( last >= 0 && std::abs( corrente - last ) > altura ) {
            perdeu = true;
        }

        last = corrente;
    }

    std::cout << ( perdeu ? "GAME OVER" : "YOU WIN" ) << std::endl;

    return 0;

}
