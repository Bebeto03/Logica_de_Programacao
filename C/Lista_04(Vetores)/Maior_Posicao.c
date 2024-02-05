#include <stdio.h>

int main () {

    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    double maior = vet[0];
    int pos = 0;

    for(int i=0;i<n;i++){
        if(vet[i]>maior){
            maior = vet[i];
            pos = i;
        }
    }

    printf("MAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", pos);

    return 0;

}