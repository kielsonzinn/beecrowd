#include <iostream>
#include <vector>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    std::vector<int> nums = { n1, n2 };
    std::sort( nums.begin(), nums.end() );

    n1 = nums[0];
    n2 = nums[1];

    for ( int i = n1 + 1; i < n2; i++ ) {
        const int resto = i % 5;
        if ( resto == 2 || resto == 3 ) {
            std::cout << i << std::endl;
        }
    }

    return 0;

}
