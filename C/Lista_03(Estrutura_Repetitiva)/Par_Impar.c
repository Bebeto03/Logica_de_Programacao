#include <stdio.h>

int main () {

    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int x;
        printf("Digite um numero: ");
        scanf("%d", &x);

        if((x>0) && (x%2==0)){
            printf("PAR POSITIVO\n");
        }
        else if((x>0) && (x%2!=0)){
            printf("IMPAR POSITIVO\n");
        }
        else if((x<0) && (x%2==0)){
            printf("PAR NEGATIVO\n");
        }
        else if((x<0) && (x%2!=0)){
            printf("IMPAR NEGATIVO\n");
        }
        else{
            printf("NULO\n");
        }
    }

    return 0;
    
}