#include <iostream>
#include <string>

int main() {

    int qt;
    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {
        std::string curso;
        std::cin.ignore();
        std::getline( std::cin, curso );
    }

    std::cout << "Ciencia da Computacao" << std::endl;

    return 0;

}