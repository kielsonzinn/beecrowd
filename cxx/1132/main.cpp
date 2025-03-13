#include <iostream>
#include <vector>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    std::vector<int> nums = { n1, n2 };
    std::sort( nums.begin(), nums.end() );

    n1 = nums[0];
    n2 = nums[1];

    int soma = 0;

    for ( int i = n1; i <= n2; i++ ) {
        if ( i % 13 != 0 ) {
            soma += i;
        }
    }

    std::cout << soma << std::endl;

    return 0;

}