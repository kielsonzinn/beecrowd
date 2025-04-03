#include <iostream>

int main() {
    int count;
    std::cin >> count;

    for ( int i = 0; i < count; i++ ) {
        int num;
        std::cin >> num;

        bool primo = true;

        for ( int j = 2; j < num; j++ ) {
            if ( num % j == 0 ) {
                primo = false;
                break;
            }
        }

        if ( primo ) {
            std::cout << num << " eh primo" << std::endl;
        } else {
            std::cout << num << " nao eh primo" << std::endl;
        }
    }

    return 0;
}
