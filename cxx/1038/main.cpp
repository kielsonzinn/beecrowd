#include <iostream>
#include <iomanip>

int main() {

    std::cout << std::fixed << std::setprecision( 2 );

    int codigo, quantidade;

    std::cin >> codigo >> quantidade;

    double preco;

    switch ( codigo ) {
        case 1:
            preco = 4.00;
            break;
        case 2:
            preco = 4.50;
            break;
        case 3:
            preco = 5.00;
            break;
        case 4:
            preco = 2.00;
            break;
        case 5:
            preco = 1.50;
            break;
        default:
            preco = 0.00;
            break;
    }

    const double total = preco * quantidade;
    std::cout << "Total: R$ " << total << std::endl;

    return 0;

}
