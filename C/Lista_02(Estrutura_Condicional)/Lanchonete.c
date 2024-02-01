#include <stdio.h>

int main () {

    int codigo;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    int quantidade;

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    double total;

    switch (codigo)
    {
    case 1:
        total = quantidade * 5.00;
        break;
    case 2:
        total = quantidade * 3.50;
        break;
    case 3:
        total = quantidade * 4.80;
        break;
    case 4:
        total = quantidade * 8.90;
        break;
    case 5:
        total = quantidade * 7.32;
        break;
    default:
        printf("Codigo invalido\n");
        break;
    }

    printf("Valor a pagar: R$ %.2lf", total);

    return 0;

}