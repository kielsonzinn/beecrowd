#include <iostream>

int main() {

    int alcool = 0, gasolina = 0, diesel = 0;

    while ( true ) {

        int tipo;
        std::cin >> tipo;

        if ( tipo == 4 ) {
            break;
        }

        switch ( tipo ) {
            case 1:
                alcool += 1;
                break;
            case 2:
                gasolina += 1;
                break;
            case 3:
                diesel += 1;
                break;
        }

    }

    std::cout << "MUITO OBRIGADO" << std::endl;
    std::cout << "Alcool: " << alcool << std::endl;
    std::cout << "Gasolina: " << gasolina << std::endl;
    std::cout << "Diesel: " << diesel << std::endl;

    return 0;

}
