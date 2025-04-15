#include <iostream>

int main() {

    int qt;
    std::cin >> qt;

    for ( int i = 0; i < qt; i++ ) {
        int casos;
        std::cin >> casos;

        int result = 0;

        for ( int j = 0; j < casos; j++ ) {
            result += ( j % 2 == 0 ) ? 1 : -1;
        }

        std::cout << result << std::endl;

    }

    return 0;
}
