#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

std::string formatarInt( int numero ) {
    std::ostringstream oss;
    oss << std::setw( 3 ) << numero;
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

        for ( int i = 0; i < n; i++ ) {

            for ( int j = 0; j < n; j++ ) {

                int current = min( i, j, n - 1 - i, n - 1 - j ) + 1;
                std::cout << formatarInt( current );

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