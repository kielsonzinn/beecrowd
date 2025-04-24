#include <iostream>
#include <string>

int main() {

    long num;
    std::cin >> num;

    std::string texto = std::to_string( num );
    const int size = texto.length();

    for ( int i = size - 1; i >= 0; i-- ) {
        std::cout << texto[i];
    }

    std::cout << std::endl;

    return 0;

}
