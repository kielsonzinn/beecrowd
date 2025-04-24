#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int respostas[5];
    int corretos = 0;

    for ( int i = 0; i < 5; ++i ) {
        cin >> respostas[i];
        if ( respostas[i] == t ) {
            ++corretos;
        }
    }

    cout << corretos << endl;

    return 0;
}
