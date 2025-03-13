#include <iostream>

int main() {

    int i = 1, j = 60;

    while ( j >= 0 ) {
        std::cout << "I=" << i << " J=" << j << std::endl;
        j-=5;
        i+=3;
    }

    return 0;

}
