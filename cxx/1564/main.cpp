#include <iostream>
#include <vector>

int main() {

    int n;

    while ( std::cin >> n ) {
        if ( n > 0 ) {
            std::cout << "vai ter duas!" << std::endl;

        } else {
            std::cout << "vai ter copa!" << std::endl;
        }
    }

    return 0;

}
