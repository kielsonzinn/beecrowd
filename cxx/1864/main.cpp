#include <iostream>
#include <string>

int main() {

    int n;
    std::cin >> n;

    std::string words = "LIFE IS NOT A PROBLEM TO BE SOLVED BUT A REALITY TO BE EXPERIENCED";

    for ( int i = 0; i < n; i++ ) {
        std::cout << words[i];
    }

    std::cout << std::endl;

    return 0;

}
