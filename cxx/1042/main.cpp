#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;

    std::vector<int> sorted = { n1, n2, n3 };

    std::sort( sorted.begin(), sorted.end() );

    for ( const int num : sorted ) {
        std::cout << num << std::endl;
    }

    std::cout << std::endl;

    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;

    return 0;

}
