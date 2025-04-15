#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operacao;
    cin >> operacao;

    double matriz[12][12];
    double soma = 0.0;
    int count = 0;

    // Leitura da matriz 12x12
    for ( int i = 0; i < 12; ++i ) {
        for ( int j = 0; j < 12; ++j ) {
            cin >> matriz[i][j];
        }
    }

    for ( int j = 11; j > 6; --j ) {
        for ( int i = 11 - j + 1; i < 11 - ( 11 - j ); ++i ) {
            soma += matriz[i][j];
            ++count;
        }
    }

    // Imprime o resultado com uma casa decimal
    cout << fixed << setprecision( 1 );
    if ( operacao == 'S' ) {
        cout << soma << endl;
    } else if ( operacao == 'M' ) {
        cout << ( soma / count ) << endl;
    }

    return 0;
}