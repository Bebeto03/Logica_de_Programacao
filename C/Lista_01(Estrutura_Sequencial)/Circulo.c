#include <stdio.h>
#include <math.h>

int main () {

    double raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    double area = pow(raio,2)*3.14159;

    printf("AREA = %.3lf", area);

}