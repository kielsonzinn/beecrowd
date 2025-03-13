#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
#include <sstream>
#include <string>

std::string format_number( double num, int precision = 2 ) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision( precision ) << num;
    std::string formatted = oss.str();
    std::replace( formatted.begin(), formatted.end(), '.', ',' );
    return formatted;
}

int main() {

    int quantia;

    std::cin >> quantia;

    std::cout << std::fixed << std::setprecision( 2 );
    std::cout << quantia << std::endl;

    for ( const double nota : { 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00 } ) {

        const int qtNota = quantia / nota;
        std::cout << qtNota << " nota(s) de R$ " << format_number( nota ) << std::endl;

        quantia -= qtNota * nota;

    }

    return 0;
}
