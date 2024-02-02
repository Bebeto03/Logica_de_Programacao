#include <stdio.h>

int main () {
    
    int casos;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &casos);

    for(int i=0;i<casos;i++){
        double numerador, denominador;
        printf("Entre com o numerador: ");
        scanf("%lf", &numerador);
        printf("Entre com o denominador: ");
        scanf("%lf", &denominador);

        if (denominador==0){
            printf("DIVISAO IMPOSSIVEL\n");
        }
        else{
            printf("DIVISAO = %.2lf\n", (numerador/denominador));
        }
    }

    return 0;

}