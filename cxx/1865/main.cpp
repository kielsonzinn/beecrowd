#include <iostream>
#include <string>

int main() {

    int n;
    std::cin >> n;

    for ( int i = 0; i < n; i++ ) {
        std::string name;
        int forca;
        std::cin >> name >> forca;

        if ( name == "Thor" ) {
            std::cout << "Y" << std::endl;

        } else {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}