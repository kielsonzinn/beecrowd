#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int fatorial = n;

    while ( n > 1 ) {
        n -= 1;
        fatorial *= n;
    }

    std::cout << fatorial << std::endl;

    return 0;
}
