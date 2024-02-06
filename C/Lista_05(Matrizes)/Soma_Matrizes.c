#include <stdio.h>

int main() {

    int m, n;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &m);

    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &n);

    int matA[m][n], matB[m][n];

    printf("Digite os valores da matriz A:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    int matS[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matS[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("MATRIZ SOMA:\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d  ", matS[i][j]);
        }
        printf("\n");
    }

    return 0;

}