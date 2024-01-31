#include <stdio.h>

int main () {

    int distanciaPercorrida;

    printf("Distancia percorrida: ");
    scanf("%d", &distanciaPercorrida);

    double combustivelGasto;

    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);

    double consumoMedio = distanciaPercorrida / combustivelGasto;

    printf("Consumo medio = %.3lf", consumoMedio);

}