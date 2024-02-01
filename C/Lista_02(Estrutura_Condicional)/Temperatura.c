#include <stdio.h>

int main () {

    char escala;

    printf("Voce vai digitar a temperatura em qual escala? ");
    scanf("%c", &escala);

    double temperatura;

    if (escala == 'F'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temperatura);
        temperatura = 5*(temperatura-32)/9;
        printf("Temperatura equivalente em celsius: %.2lf", temperatura);
    }
    else if (escala == 'C'){
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temperatura);
        temperatura = ((9*temperatura)/5) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", temperatura);
    }
    else{
        printf("erro.");
    }

    return 0;

}