#include <iostream>

int main() {

    int num;

    std::cin >> num;

    for ( int i = 2; i <= num; i += 2 ) {
        std::cout << i << "^2 = " << ( i * i ) << std::endl;
    }

    return 0;

}
