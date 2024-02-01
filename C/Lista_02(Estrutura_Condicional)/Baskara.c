#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c;

    printf("Coeficiente A: ");
    scanf("%lf", &a);

    printf("Coeficiente B: ");
    scanf("%lf", &b);

    printf("Coeficiente C: ");
    scanf("%lf", &c);

    double delta = pow(b,2) - 4*a*c;

    if (delta < 0) {

        printf("Essa equacao nao possui raizes reais.\n");

    }
    else if (delta == 0) {

        double x = -b/(2*a);

        printf("X = %.4lf", x);

    }
    else {

        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);

        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf", x2);

    }

    return 0;

}