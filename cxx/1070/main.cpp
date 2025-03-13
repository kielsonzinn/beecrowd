#include <iostream>

int main() {

    int num;

    std::cin >> num;

    const int start = num;
    const int end = num + 11;

    for ( int i = start; i <= end; i++ ) {
        if ( i % 2 == 0 ) {
            continue;
        }
        std::cout << i << std::endl;

    }

    return 0;

}
