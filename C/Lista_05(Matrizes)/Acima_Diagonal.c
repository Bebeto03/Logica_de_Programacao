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

    int soma = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
                soma += mat[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: %d", soma);

    return 0;

}