#include <stdio.h>
#include <math.h>

int main() {

    int n;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    double mat[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    double soma = 0.0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]>0){
                soma += mat[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n\n", soma);

    int l;

    printf("Escolha uma linha: ");
    scanf("%d", &l);

    printf("LINHA ESCOLHIDA: ");
    for(int j=0;j<n;j++){
        printf("%.1lf  ", mat[l][j]);
    }

    int c;

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &c);

    printf("COLUNA ESCOLHIDA: ");
    for(int i=0;i<n;i++){
        printf("%.1lf  ", mat[i][c]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");
    for(int i=0;i<n;i++){
        printf("%.1lf ", mat[i][i]);
    }

    printf("\n\nMATRIZ ALTERADA:\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]<0){
                mat[i][j] = pow(mat[i][j],2);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.1lf  ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;

}