#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<int> nums = {};
    int soma = 0;

    while ( true ) {

        std::string comando;
        std::getline( std::cin, comando );

        if ( comando == "caw caw" ) {
            nums.push_back( soma );

            if ( nums.size() == 3 ) {
                break;
            }

            soma = 0;
            continue;
        }

        std::replace( comando.begin(), comando.end(), '-', '0' );
        std::replace( comando.begin(), comando.end(), '*', '1' );

        soma += std::stoi( comando, nullptr, 2 );;

    }

    for ( const int num : nums ) {
        std::cout << num << std::endl;
    }

    return 0;
}
