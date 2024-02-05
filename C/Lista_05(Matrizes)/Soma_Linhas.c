#include <stdio.h>

int main() {

    int m, n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double mat[m][n];

    for(int i=0;i<m;i++){
        printf("Digite os elementos da %da linha:\n", i+1);
        for(int j=0;j<n;j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    double soma[m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            soma[i]+=mat[i][j];
        }
    }

    printf("VETOR GERADO:\n");

    for(int i=0;i<m;i++){
        printf("%.1lf\n", soma[i]);
    }

    return 0;

}