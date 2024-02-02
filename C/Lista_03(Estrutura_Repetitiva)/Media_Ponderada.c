#include <stdio.h>

int main () {

    int n;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        double x, y, z;
        printf("Digite tres numeros:\n");
        scanf("%lf", &x);
        scanf("%lf", &y);
        scanf("%lf", &z);

        double media = (2*x+3*y+5*z)/10;

        printf("MEDIA = %.1lf\n", media);
    }

    return 0;

}