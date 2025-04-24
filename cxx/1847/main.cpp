#include <iostream>

std::string getHumor( const int dia1, const int dia2, const int dia3 ) {

    if ( dia1 > dia2 && dia3 >= dia2 ) {
        return ":)";
    }

    if ( dia2 > dia1 && dia3 <= dia2 ) {
        return ":(";
    }

    if ( dia2 > dia1 && dia3 > dia2 && ( dia3 - dia2 ) < ( dia2 - dia1 ) ) {
        return ":(";
    }

    if ( dia2 > dia1 && dia3 > dia2 && ( dia3 - dia2 ) >= ( dia2 - dia1 ) ) {
        return ":)";
    }

    if ( dia1 > dia2 && dia2 > dia3 && ( dia2 - dia3 ) < ( dia1 - dia2 ) ) {
        return ":)";
    }

    if ( dia1 > dia2 && dia2 > dia3 && ( dia2 - dia3 ) >= ( dia1 - dia2 ) ) {
        return ":(";
    }

    if ( dia1 == dia2 && dia3 > dia2 ) {
        return ":)";
    }

    return ":(";

}

int main() {

    int dia1, dia2, dia3;
    std::cin >> dia1 >> dia2 >> dia3;

    std::cout << getHumor( dia1, dia2, dia3 ) << std::endl;

    return 0;

}