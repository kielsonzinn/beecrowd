#include <iostream>

int main() {

    int start, end;

    std::cin >> start >> end;

    if ( end < start ) {
        int aux = end;
        end = start;
        start = aux;
    }

    start += 1;
    end -= 1;

    int soma = 0;

    for ( int i = start; i <= end; i++ ) {
        if ( i % 2 == 0 ) {
            continue;
        }
        soma += i;

    }

    std::cout << soma << std::endl;

    return 0;

}
