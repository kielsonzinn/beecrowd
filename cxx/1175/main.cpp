#include <iostream>

int main() {
    int nums[20];

    for ( int i = 0; i < 20; i++ ) {
        int num;
        std::cin >> num;

        nums[i] = num;
    }

    for ( int i = 0; i < 10; i++ ) {
        int a1 = nums[i];
        int a2 = nums[19 - i];

        nums[i] = a2;
        nums[19 - i] = a1;
    }

    for ( int i = 0; i < 20; i++ ) {
        std::cout << "N[" << i << "] = " << nums[i] << std::endl;
    }

    return 0;
}
