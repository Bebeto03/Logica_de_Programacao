#include <stdio.h>

int main () {

    int duracao;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    int horas = duracao/3600;
    int minutos = (duracao%3600)/60;
    int segundos = (duracao%3600)%60;

    printf("%d:%d:%d", horas, minutos, segundos);
    
    return 0;
    
}