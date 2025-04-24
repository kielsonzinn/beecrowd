#include <iostream>

int main() {

    int qt;
    std::cin >> qt;

    int multi2 = 0, multi3 = 0, multi4 = 0, multi5 = 0;

    for ( int i = 0; i < qt; i++ ) {
        int num;
        std::cin >> num;

        if ( num % 2 == 0 ) {
            multi2 += 1;
        }

        if ( num % 3 == 0 ) {
            multi3 += 1;
        }

        if ( num % 4 == 0 ) {
            multi4 += 1;
        }

        if ( num % 5 == 0 ) {
            multi5 += 1;
        }

    }

    std::cout << multi2 << " Multiplo(s) de 2" << std::endl;
    std::cout << multi3 << " Multiplo(s) de 3" << std::endl;
    std::cout << multi4 << " Multiplo(s) de 4" << std::endl;
    std::cout << multi5 << " Multiplo(s) de 5" << std::endl;

    return 0;

}