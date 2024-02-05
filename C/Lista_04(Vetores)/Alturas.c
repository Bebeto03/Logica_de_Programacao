#include <stdio.h>
#include <string.h>

void limpar_entrada() { 
    char c; 
    while ((c = getchar()) != '\n' && c != EOF) {} 
} 

void ler_texto(char *buffer, int length) { 
    fgets(buffer, length, stdin); 
    strtok(buffer, "\n"); 
}

int main () {

    int n;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    for(int i=0;i<n;i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    double soma=0, media=0, cont=0;

    for(int i=0;i<n;i++){
        soma += altura[i];
        if(idade[i]<16){
            cont++;
        }
    }

    media = soma/n;

    printf("\nAltura media: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", cont*100/n);

    for(int i=0;i<n;i++){
        if(idade[i]<16){
            printf("%s\n", nome[i]);
        }
    }

}