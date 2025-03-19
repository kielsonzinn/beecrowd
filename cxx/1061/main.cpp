#include <iostream>
#include <string>

constexpr const int SEGUNDOS_POR_MINUTO = 60;
constexpr const int SEGUNDOS_POR_HORA = 3600;
constexpr const int SEGUNDOS_POR_DIA = 86400;

int main() {
    std::string dia;
    char c;
    int diaInicio, diaFim;
    int horaInicio, minInicio, segInicio;
    int horaFim, minFim, segFim;

    std::cin >> dia >> diaInicio;
    std::cin >> horaInicio >> c >> minInicio >> c >> segInicio;

    std::cin >> dia >> diaFim;
    std::cin >> horaFim >> c >> minFim >> c >> segFim;

    int inicioSeg = segInicio + ( minInicio * SEGUNDOS_POR_MINUTO ) + ( horaInicio * SEGUNDOS_POR_HORA ) + ( diaInicio * SEGUNDOS_POR_DIA );
    int fimSeg = segFim + ( minFim * SEGUNDOS_POR_MINUTO ) + ( horaFim * SEGUNDOS_POR_HORA ) + ( diaFim * SEGUNDOS_POR_DIA );

    int duracao = fimSeg - inicioSeg;

    int dias = duracao / SEGUNDOS_POR_DIA;
    duracao %= SEGUNDOS_POR_DIA;

    int horas = duracao / SEGUNDOS_POR_HORA;
    duracao %= SEGUNDOS_POR_HORA;

    int minutos = duracao / SEGUNDOS_POR_MINUTO;
    duracao %= SEGUNDOS_POR_MINUTO;

    int segundos = duracao;

    std::cout << dias << " dia(s)" << std::endl;
    std::cout << horas << " hora(s)" << std::endl;
    std::cout << minutos << " minuto(s)" << std::endl;
    std::cout << segundos << " segundo(s)" << std::endl;

    return 0;
}
