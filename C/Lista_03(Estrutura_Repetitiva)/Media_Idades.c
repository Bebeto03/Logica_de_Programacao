#include <stdio.h>

int main () {

    int idade, soma=0, cont=0;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if(idade>=0){
        while(idade>=0){
            cont++;
            soma += idade;
            scanf("%d", &idade);
        }
        media = (double) soma/cont;
        printf("MEDIA = %.2lf", media);
    }
    else{
        printf("IMPOSSIVEL CALCULAR");
    }

    return 0;

}