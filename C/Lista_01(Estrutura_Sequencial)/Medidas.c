#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c;

    printf("Digite a medida A: ");
    scanf("%lf", &a);

    printf("Digite a medida B: ");
    scanf("%lf", &b);

    printf("Digite a medida C: ");
    scanf("%lf", &c);

    double quadrado = pow(a,2);
    double triangulo = (a*b)/2;
    double trapezio = ((a+b)*c)/2;

    printf("AREA DO QUADRADO = %.4lf\n", quadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", triangulo);
    printf("AREA DO TRAPEZIO = %.4lf", trapezio);

}