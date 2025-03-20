#include <iostream>

int main() {
    int qtByLine, total;
    std::cin >> qtByLine >> total;

    int count = 1;
    int qtByLineCount = 1;
    bool hasLineBreak = false;

    while ( count <= total ) {

        if ( qtByLineCount > 1 ) {
            std::cout << " ";
        }

        hasLineBreak = false;
        std::cout << count;

        qtByLineCount += 1;
        count += 1;

        if ( qtByLineCount > qtByLine ) {
            qtByLineCount = 1;
            std::cout << std::endl;
            hasLineBreak = true;
        }

    }

    if ( !hasLineBreak ) {
        std::cout << std::endl;
    }

    return 0;

}
