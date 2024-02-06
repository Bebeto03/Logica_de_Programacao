#include <stdio.h>

int main() {

    int n;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int vet[n];

    for(int i=0;i<n;i++){
        int maior = mat[i][0];
        for(int j=0;j<n;j++){
            if(mat[i][j]>maior){
                maior = mat[i][j];
            }
        }
        vet[i] = maior;
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");

    for(int i=0;i<n;i++){
        printf("%d\n", vet[i]);
    }

    return 0;

}