#include <iostream>
#include <vector>

int main() {

    int qt;
    int caso = 1;

    while ( std::cin >> qt ) {

        std::vector<int> nums = { 0 };

        for ( int i = 1; i <= qt; i++ ) {

            for ( int j = 0; j < i; j++ ) {
                nums.push_back( i );
            }

        }

        int count = nums.size();

        std::cout << "Caso " << caso << ": " << count << " numero" << ( count > 1 ? "s" : "" ) << std::endl;
        std::cout << nums[0];
        for ( int i = 1; i < count; i++ ) {
            std::cout << " " << nums[i];
        }
        std::cout << std::endl;
        std::cout << std::endl;

        caso += 1;

    }

    return 0;

}