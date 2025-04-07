#include <iostream>
#include <vector>

int main() {

    while ( true ) {

        int n, m;
        std::cin >> n >> m;

        if ( n == 0 && m == 0 ) {
            break;
        }

        std::vector<std::vector<char> > matriz( n, std::vector<char>( m ) );

        for ( int i = 0; i < n; i++ ) {

            for ( int j = 0; j < m; j++ ) {

                char celula;
                std::cin >> celula;

                matriz[i][j] = celula;

            }

        }

        auto fnGetCorrompido = [&]( char actual, int linha, int coluna ) -> char {
                                   if ( actual != 'A' ) {
                                       return actual;
                                   }

                                   if ( linha > 0 ) { //tem linha em cima
                                       char emCima = matriz[linha - 1][coluna];

                                       if ( emCima == 'T' ) {
                                           return 'T';
                                       }
                                   }

                                   if ( linha < ( n - 1 ) ) { //tem linha em baixo
                                       char emBaixo = matriz[linha + 1][coluna];

                                       if ( emBaixo == 'T' ) {
                                           return 'T';
                                       }
                                   }

                                   if ( coluna > 0 ) { //tem coluna na esquerda
                                       char naEsquerda = matriz[linha][coluna - 1];

                                       if ( naEsquerda == 'T' ) {
                                           return 'T';
                                       }
                                   }

                                   if ( coluna < ( m - 1 ) ) { //tem coluna na direita
                                       char naDireita = matriz[linha][coluna + 1];

                                       if ( naDireita == 'T' ) {
                                           return 'T';
                                       }
                                   }

                                   return 'A';
                               };

        bool mudouAlgo;

        do {
            mudouAlgo = false;

            for ( int i = 0; i < n; i++ ) {
                for ( int j = 0; j < m; j++ ) {
                    char actual = matriz[i][j];
                    char novo = fnGetCorrompido( actual, i, j );

                    if ( actual != novo ) {
                        mudouAlgo = true;
                        matriz[i][j] = novo;
                    }
                }
            }

        } while( mudouAlgo );

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                std::cout << matriz[i][j];
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;

}