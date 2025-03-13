#include <iostream>
#include <iomanip>
#include <cmath>

double roundToTwoDecimals( double value ) {
    return std::round( value * 100.0 ) / 100.0;
}

int main() {

    double num;

    std::cin >> num;
    std::cout << std::fixed << std::setprecision( 2 );

    std::cout << "NOTAS:" << std::endl;
    for ( const double nota : { 100.00, 50.00, 20.00, 10.00, 5.00, 2.00 } ) {

        const int qtNota = num / nota;
        num -= qtNota * nota;

        std::cout << qtNota << " nota(s) de R$ " << nota << std::endl;

    }

    std::cout << "MOEDAS:" << std::endl;
    for ( const double moeda : { 1.00, 0.50, 0.25, 0.10, 0.05, 0.01 } ) {

        int qtMoeda = 0;

        while ( num >= moeda ) {
            qtMoeda += 1;
            num -= moeda;
            num = roundToTwoDecimals( num );
        }

        std::cout << qtMoeda << " moeda(s) de R$ " << moeda << std::endl;

    }

    return 0;

}
