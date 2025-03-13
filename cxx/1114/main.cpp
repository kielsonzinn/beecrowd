#include <iostream>

int main() {

    int senha;

    while ( true ) {

        std::cin >> senha;

        if ( senha == 2002 ) {
            std::cout << "Acesso Permitido" << std::endl;
            break;
        }

        std::cout << "Senha Invalida" << std::endl;
    }

    return 0;

}
