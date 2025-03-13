#include <iostream>
#include <vector>

int main() {

    int n;
    std::cin >> n;

    for ( int i = 0; i < n; i++ ) {
        int n1, n2;
        std::cin >> n1 >> n2;
        int soma = 0;

        std::vector<int> nums = { n1, n2 };
        std::sort( nums.begin(), nums.end() );

        n1 = nums[0];
        n2 = nums[1];

        for ( int j = n1 + 1; j < n2; j++ ) {
            if ( j % 2 == 1 ) {
                soma += j;
            }
        }

        std::cout << soma << std::endl;

    }

    return 0;

}
