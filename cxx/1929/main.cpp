#include <iostream>
#include <vector>

bool isTriangulo( int a, int b, int c ) {
    return ( a + b > c ) && ( a + c > b ) && ( b + c > a );
}

bool isTriangulo( std::vector<int> nums ) {

    std::sort( nums.begin(), nums.end() );

    for ( int i = 0; i <= 1; i++ ) {
        for ( int j = i + 1; j <= 2; j++ ) {
            for ( int k = j + 1; k <= 3; k++ ) {
                if ( isTriangulo( nums[i], nums[j], nums[k] ) ) {
                    return true;
                }
            }

        }
    }

    return false;

}

int main() {
    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    bool accepted = isTriangulo( { a, b, c, d } );

    std::cout << ( accepted ? "S" : "N" ) << std::endl;

    return 0;

}
