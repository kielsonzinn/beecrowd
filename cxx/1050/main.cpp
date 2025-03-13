#include <iostream>
#include <map>
#include <string>

int main() {

    int ddd;
    std::cin >> ddd;

    const std::map<int, std::string> cidadeByDDD = {
        { 61, "Brasilia" },
        { 71, "Salvador" },
        { 11, "Sao Paulo" },
        { 21, "Rio de Janeiro" },
        { 32, "Juiz de Fora" },
        { 19, "Campinas" },
        { 27, "Vitoria" },
        { 31, "Belo Horizonte" },
    };

    if ( cidadeByDDD.contains( ddd ) ) {
        std::cout << cidadeByDDD.at( ddd ) << std::endl;

    } else {
        std::cout << "DDD nao cadastrado" << std::endl;
    }

    return 0;

}
