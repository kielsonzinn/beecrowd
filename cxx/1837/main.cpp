#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if ( r < 0 ) {
        if ( b > 0 ) {
            r += b;
            q -= 1;
        } else {
            r -= b;
            q += 1;
        }
    }

    std::cout << q << " " << r << std::endl;

    return 0;
}
