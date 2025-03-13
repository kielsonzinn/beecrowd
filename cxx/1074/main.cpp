#include <iostream>

int main() {

    int quant;
    std::cin >> quant;

    for ( int i = 0; i < quant; i++ ) {
        int number;
        std::cin >> number;

        if ( number == 0 ) {
            std::cout << "NULL" << std::endl;
            continue;
        }

        if ( number % 2 == 0 || number % -2 == 0 ) {
            std::cout << "EVEN";
        } else {
            std::cout << "ODD";
        }

        if ( number > 0 ) {
            std::cout << " POSITIVE" << std::endl;
        } else {
            std::cout << " NEGATIVE" << std::endl;
        }
    }

    return 0;

}
