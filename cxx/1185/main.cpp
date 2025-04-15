#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operacao;
    cin >> operacao;

    double matriz[12][12];
    double soma = 0.0;
    int count = 0;

    for ( int i = 0; i < 12; ++i ) {
        for ( int j = 0; j < 12; ++j ) {
            cin >> matriz[i][j];
        }
    }

    for ( int i = 0; i < 11; ++i ) {
        for ( int j = 0; j < ( 11 - i ); ++j ) {
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