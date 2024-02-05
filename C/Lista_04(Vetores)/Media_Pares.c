#include <stdio.h>

int main () {

    int n;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];

    for(int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    int soma = 0, cont = 0;

    for(int i=0;i<n;i++){
        if(vet[i]%2==0){
            soma += vet[i];
            cont++;
        }
    }

    double media = (double) soma/cont;

    if(cont==0){
        printf("NENHUM NUMERO PAR.");
    }
    else{
        printf("MEDIA DOS PARES = %.1lf", media);
    }

    return 0;
    
}