#include <stdio.h>

int main () {

    int minutos;

    printf("Digite aquantidade de minutos: ");
    scanf("%d", &minutos);

    double valorPagar;

    if (minutos>100) {

        valorPagar = 50.00 + 2*(minutos-100);

    }
    else{

        valorPagar = 50.00;

    }

    printf("Valor a pagar: R$ %.2lf", valorPagar);

    return 0;
    
}