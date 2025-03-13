#include <iostream>

int main() {

    int dias;

    std::cin >> dias;

    constexpr const int DIAS_EM_1_MES = 30;
    constexpr const int DIAS_EM_1_ANO = 365;

    const int anos = dias / DIAS_EM_1_ANO;
    dias -= DIAS_EM_1_ANO * anos;

    const int meses = dias / DIAS_EM_1_MES;
    dias -= DIAS_EM_1_MES * meses;

    std::cout << anos << " ano(s)" << std::endl;
    std::cout << meses << " mes(es)" << std::endl;
    std::cout << dias << " dia(s)" << std::endl;

    return 0;

}