#include <iostream>

int main() {

    int max = -1, maxPos = 0;

    for ( int i =0; i < 100; i++ ) {
        int number;
        std::cin >> number;

        if ( number > max ) {
            max = number;
            maxPos = i + 1;
        }
    }

    std::cout << max << std::endl;
    std::cout << maxPos << std::endl;

    return 0;

}