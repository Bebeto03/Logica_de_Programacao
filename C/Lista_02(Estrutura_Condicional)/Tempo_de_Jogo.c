#include <stdio.h>

int main () {

    int horaInicial, horaFinal;

    printf("Hora inicial: ");
    scanf("%d", &horaInicial);

    printf("Hora final: ");
    scanf("%d", &horaFinal);

    if (horaFinal<=horaInicial){

        horaFinal = horaFinal + 24;

    }

    int duracao = horaFinal - horaInicial;

    printf("O JOGO DUROU %d HORA(S)", duracao);

    return 0;

}