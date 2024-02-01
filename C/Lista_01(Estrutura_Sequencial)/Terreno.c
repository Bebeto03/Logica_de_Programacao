#include <stdio.h>

int main () {

    double larguraTerreno, comprimentoTerreno, valorMetroQuadrado;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &larguraTerreno);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimentoTerreno);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMetroQuadrado);

    double areaTerreno = larguraTerreno * comprimentoTerreno;

    double precoTerreno = areaTerreno * valorMetroQuadrado;

    printf("Area do terreno = %.2lf\n", areaTerreno);
    printf("Preco do terreno = %.2lf", precoTerreno);

    return 0;

}