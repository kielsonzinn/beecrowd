#include <iostream>
#include <iomanip>

int main() {

    std::cout << std::fixed << std::setprecision( 2 );

    int qt;
    std::cin >> qt;

    double total = 0.00;

    for ( int i = 0; i < qt; i++ ) {

        int product, buy;
        std::cin >> product >> buy;

        switch ( product ) {
            case 1001:
                total += 1.50 * buy;
                break;
            case 1002:
                total += 2.50 * buy;
                break;
            case 1003:
                total += 3.50 * buy;
                break;
            case 1004:
                total += 4.50 * buy;
                break;
            case 1005:
                total += 5.50 * buy;
                break;
            default:
                break;
        }

    }

    std::cout << total << std::endl;

}
