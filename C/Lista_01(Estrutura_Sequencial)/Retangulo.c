#include <stdio.h>
#include <math.h>

int main () {

    double base, altura;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    double area = base * altura;

    double perimetro = 2*base + 2*altura;

    double diagonal = sqrt(pow(base,2)+pow(altura,2));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf", diagonal);

}