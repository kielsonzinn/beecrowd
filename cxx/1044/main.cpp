#include <iostream>

int main() {

    int n1, n2;
    std::cin >> n1 >> n2;

    if ( n1 % n2 == 0 || n2 % n1 == 0 ) {
        std::cout << "Sao Multiplos" << std::endl;

    } else {
        std::cout << "Nao sao Multiplos" << std::endl;
    }

    return 0;

}
