#include <stdio.h>

int main () {

    int n;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    double vet[n];

    for(int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    double soma = 0, media = 0;

    for(int i=0;i<n;i++){
        soma += vet[i];
    }

    media = soma/n;

    printf("MEDIA DO VETOR = %.3lf\n", media);

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for(int i=0;i<n;i++){
        if(vet[i]<media){
            printf("%.1lf\n", vet[i]);
        }
    }

    return 0;

}