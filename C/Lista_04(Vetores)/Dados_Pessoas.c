#include <stdio.h>

int main () {

    int n;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char genero[n];
    double altura[n];

    for(int i=0;i<n;i++){
        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i+1);
        scanf(" %c", &genero[i]);
    }

    double maior = altura[0], menor = altura[0];

    for(int i=0;i<n;i++){
        if(altura[i]>maior){
            maior = altura[i];
        }
        if(altura[i]<menor){
            menor = altura[i];
        }
    }

    int contF=0, contM=0;
    double soma=0, media;

    for(int i=0;i<n;i++){
        if(genero[i] == 'F'){
            contF++;
            soma += altura[i];
        }
        if(genero[i] == 'M'){
            contM++;
        }
    }

    media = soma/contF;

    printf("Maior altura: %.2lf\n", maior);
    printf("Menor altura: %.2lf\n", menor);
    printf("Media das alturas das mulheres: %.2lf\n", media);
    printf("Numero de homens: %d", contM);

    return 0;

}