#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

int main() {
    int v;
    std::cin >> v;

    std::stringstream ss;
    ss << std::hex << v;
    std::string res ( ss.str() );
    std::transform( res.begin(), res.end(), res.begin(), ::toupper );

    std::cout << res << std::endl;

    return 0;

}
