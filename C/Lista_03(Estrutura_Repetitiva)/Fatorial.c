#include <stdio.h>

int main () {

    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int fat = 1;

    for(int i=n;i>=1;i--){
        fat = fat * i;
    }

    if(n==0){
        fat = 1;
    }

    printf("FATORIAL = %d", fat);

    return 0;
    
}