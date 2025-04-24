#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <cmath>

int contarDigitos( int numero ) {
    return std::to_string( std::abs( numero ) ).length();
}

std::string formatarInt( int numero, int count ) {
    std::ostringstream oss;
    oss << std::setw( count ) << numero;
    return oss.str();
}

int min( int a1, int a2, int a3, int a4 ) {
    std::vector<int> nums = { a1, a2, a3, a4 };
    std::sort( nums.begin(), nums.end() );
    return nums[0];
}

int main() {

    while ( true ) {

        int n;
        std::cin >> n;

        if ( n == 0 ) {
            break;
        }

        int max = 0;
        int matriz[n][n];

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                int current = std::pow( 2, i + j );
                if ( current > max ) {
                    max = current;
                }
                matriz[i][j] = current;
            }

        }

        max = contarDigitos( max );

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                std::cout << formatarInt( matriz[i][j], max );

                if ( j < ( n - 1 ) ) {
                    std::cout << " ";
                }
            }

            std::cout << std::endl;
        }

        std::cout << std::endl;

    }

    return 0;

}