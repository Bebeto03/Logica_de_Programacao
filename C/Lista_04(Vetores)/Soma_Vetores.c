#include <stdio.h>

int main () {

    int n;

    printf("Qunatos valores vai ter cada vetor? ");
    scanf("%d", &n);

    double vetA[n], vetB[n], vetC[n];

    printf("Digite os valores do vetor A:\n");
    for(int i=0;i<n;i++){
        scanf("%lf", &vetA[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for(int i=0;i<n;i++){
        scanf("%lf", &vetB[i]);
    }

    printf("VETOR RESULTANTE:\n");
    for(int i=0;i<n;i++){
        vetC[i] = vetA[i] + vetB[i];
        printf("%.1lf\n", vetC[i]);
    }

    return 0;

}