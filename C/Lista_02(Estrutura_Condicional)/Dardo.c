#include <stdio.h>

int main () {

    double distancia1, distancia2, distancia3;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &distancia1);
    scanf("%lf", &distancia2);
    scanf("%lf", &distancia3);

    double maior;

    if (distancia1>=distancia2 && distancia1>=distancia3){

        maior = distancia1;

    }
    else if (distancia2>=distancia1 && distancia2>=distancia3) {

        maior = distancia2;

    }
    else {

        maior = distancia3;

    }

    printf("MAIOR DISTANCIA = %.2lf", maior);

    return 0;

}