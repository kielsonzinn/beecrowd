#include <iostream>
#include <vector>

int main() {

    int n;

    while ( std::cin >> n ) {

        if ( n == 0 ) {
            break;
        }

        int matriz[n][n];

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                matriz[i][j] = 3;
            }
        }

        for ( int i = 0; i < n; i++ ) {
            matriz[i][i] = 1;
            matriz[i][n - 1 - i] = 2;
        }

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                std::cout << matriz[i][j];
            }
            std::cout << std::endl;
        }

    }

    return 0;

}