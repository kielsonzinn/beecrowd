#include <iostream>

int main() {

    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    std::cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

    int horas;
    int minutos;

    if ( horaInicial < horaFinal || ( horaInicial == horaFinal && minutoFinal > minutoInicial ) ) {
        horas = horaFinal - horaInicial;
    } else {
        horas = ( 24 - horaInicial ) + horaFinal;
    }

    if ( minutoFinal > minutoInicial ) {
        minutos = minutoFinal - minutoInicial;

    } else if ( minutoFinal < minutoInicial ) {
        minutos = ( 60 - minutoInicial ) + minutoFinal;
        horas -= 1;

    } else {
        minutos = 0;
    }

    std::cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << std::endl;

    return 0;

}
