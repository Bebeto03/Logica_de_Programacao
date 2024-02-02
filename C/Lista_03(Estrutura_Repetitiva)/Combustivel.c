#include <stdio.h>

int main () {

    int codigo;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &codigo);

    int cont1=0, cont2=0, cont3=0;

    while(codigo!=4){
        switch (codigo)
        {
        case 1:
            cont1++;
            break;
        case 2:
            cont2++;
            break;
        case 3:
            cont3++;
            break;
        default:
            break;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    }

    printf("MUITO OBRIGADO!\n");

    printf("Alcool: %d\n", cont1);
    printf("Gasolina: %d\n", cont2);
    printf("Diesel: %d", cont3);

    return 0;

}