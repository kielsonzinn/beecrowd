#include <iostream>

int main() {

    int hora, minuto;
    char separator;

    while ( std::cin >> hora && std::cin >> separator && std::cin >> minuto ) {

        int current = ( hora * 60 ) + minuto + 60;
        int atraso = current - 480;

        if ( atraso < 0 ) {
            atraso = 0;
        }

        std::cout << "Atraso maximo: " << atraso << std::endl;

    }

    return 0;

}
