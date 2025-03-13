#include <iostream>

int main() {

    double num;

    std::cin >> num;

    if ( num >= 0.00 && num <= 25.00 ) {
        std::cout << "Intervalo [0,25]" << std::endl;

    }else if ( num > 25.00 && num <= 50.00 ) {
        std::cout << "Intervalo (25,50]" << std::endl;

    }else if ( num > 50.00 && num <= 75.00 ) {
        std::cout << "Intervalo (50,75]" << std::endl;

    }else if ( num > 75.00 && num <= 100.00 ) {
        std::cout << "Intervalo (75,100]" << std::endl;

    }else {
        std::cout << "Fora de intervalo" << std::endl;
    }

    return 0;
}
