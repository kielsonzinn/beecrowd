#include <iostream>

int main() {

    int n;
    std::cin >> n;
    int pos = -1, menor;

    for ( int i = 0; i < n; i++ ) {
        int num;
        std::cin >> num;

        if ( i == 0 || num < menor ) {
            menor = num;
            pos = i + 1;
        }
    }

    std::cout << pos << std::endl;

    return 0;

}
