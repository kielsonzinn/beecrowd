#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int count = 1;

    for ( int i = 0; i < n; i++ ) {
        std::cout << count << " ";
        count += 1;
        std::cout << count << " ";
        count += 1;
        std::cout << count << " ";
        count += 1;
        std::cout << "PUM" << std::endl;
        count += 1;
    }

    return 0;

}
