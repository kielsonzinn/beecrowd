#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, std::string> > roman = {
        { 900, "CM" },
        { 500, "D" },
        { 400, "CD" },
        { 100, "C" },
        { 90, "XC" },
        { 50, "L" },
        { 40, "XL" },
        { 10, "X" },
        { 9, "IX" },
        { 5, "V" },
        { 4, "IV" },
        { 1, "I" }
    };

    for ( const auto& [value, symbol] : roman ) {
        while ( n >= value ) {
            std::cout << symbol;
            n -= value;
        }
    }

    std::cout << std::endl;
    return 0;
}
