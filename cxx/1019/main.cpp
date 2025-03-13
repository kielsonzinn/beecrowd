#include <iostream>

int main() {

    int segundos;

    std::cin >> segundos;

    constexpr const int SEGUNDOS_EM_1_HORA = 3600;
    constexpr const int SEGUNDOS_EM_1_MINUTO = 60;

    const int horas = segundos / SEGUNDOS_EM_1_HORA;
    segundos -= horas * SEGUNDOS_EM_1_HORA;

    const int minutos = segundos / SEGUNDOS_EM_1_MINUTO;
    segundos -= minutos * SEGUNDOS_EM_1_MINUTO;

    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;

    return 0;
}