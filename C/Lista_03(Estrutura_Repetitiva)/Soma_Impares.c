#include <stdio.h>

int main () {

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    int soma = 0;

    if(x<y){
        for(int i=x+1;i<y;i++){
            if(i%2!=0){
            soma += i;
            }
        }
    }
    else{
        for(int i=y+1;i<x;i++){
            if(i%2!=0){
                soma += i;
            }
        }
    }
    

    printf("SOMA DOS IMPARES = %d", soma);

    return 0;

}