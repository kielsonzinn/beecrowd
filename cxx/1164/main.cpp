#include <iostream>

int main() {
    int count;
    std::cin >> count;

    for ( int i = 0; i < count; i++ ) {
        int num;
        std::cin >> num;

        int soma = 0;

        for ( int j = 1; j < num; j++ ) {
            if ( num % j == 0 ) {
                soma += j;
            }
        }

        if ( num == soma ) {
            std::cout << num << " eh perfeito" << std::endl;
        } else {
            std::cout << num << " nao eh perfeito" << std::endl;
        }
    }

    return 0;
}
