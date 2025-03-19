#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for ( int i = 1; i <= N; i++ ) {
        std::cout << i << " " << i * i << " " << i * i * i << std::endl;
        std::cout << i << " " << ( i * i ) + 1 << " " << ( i * i * i ) + 1 << std::endl;
    }

    return 0;
}