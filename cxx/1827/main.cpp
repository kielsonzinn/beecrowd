#include <iostream>

int main() {

    int n;
    while ( std::cin >> n ) {

        int matriz[n][n];

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                matriz[j][i] = 0;
            }
        }

        {
            int i = 0;

            for ( int j = 0; j < n; j++ ) {
                matriz[i][j] = 2;
                i += 1;
            }
        }

        {
            int i = n - 1;

            for ( int j = 0; j < n; j++ ) {
                matriz[i][j] = 3;
                i -= 1;
            }
        }

        int inicio = n / 3;
        int fim = n - inicio;

        for ( int i = inicio; i < fim; i++ ) {
            for ( int j = inicio; j < fim; j++ ) {
                matriz[j][i] = 1;
            }
        }

        int centro = n / 2;
        matriz[centro][centro] = 4;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                std::cout << matriz[j][i];
            }

            std::cout << std::endl;
        }

        std::cout << std::endl;

    }

    return 0;

}