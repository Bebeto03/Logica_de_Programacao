#include <stdio.h>

int main () {

    int casos;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &casos);

    int quantidade;
    char tipo;
    int coelho=0, rato=0, sapo=0, total=0;

    for(int i=0;i<casos;i++){

        printf("Quantidade de cobaias: ");
        scanf("%d", &quantidade);

        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        total += quantidade;

        if (tipo=='C'){
            coelho += quantidade;
        }
        else if (tipo=='R'){
            rato += quantidade;
        }
        else if (tipo=='S'){
            sapo += quantidade;
        }
    }

    printf("\nRelatorio final:\n");

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    double perC = (double) coelho*100/total;
    double perR = (double) rato*100/total;
    double perS = (double) sapo*100/total;

    printf("Percentual de coelhos: %.2lf\n", perC);
    printf("Percentual de ratos: %.2lf\n", perR);
    printf("Percentual de sapos: %.2lf\n", perS);

    return 0;
}