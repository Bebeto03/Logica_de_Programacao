#include <stdio.h>

int main () {

    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int cont1 = 0, cont2 = 0;

    for(int i=0;i<n;i++){
        int x;
        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x>=10 && x<=20){
            cont1++;
        }
        else{
            cont2++;
        }

    }

    printf("%d DENTRO\n", cont1);
    printf("%d FORA", cont2);

    return 0;

}