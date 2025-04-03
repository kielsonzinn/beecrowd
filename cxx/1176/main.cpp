#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    std::vector<unsigned long long> fib( 61 );
    fib[0] = 0;
    fib[1] = 1;

    for ( int i = 2; i <= 60; ++i ) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for ( int i = 0; i < t; ++i ) {
        int n;
        std::cin >> n;
        std::cout << "Fib(" << n << ") = " << fib[n] << std::endl;
    }

    return 0;
}