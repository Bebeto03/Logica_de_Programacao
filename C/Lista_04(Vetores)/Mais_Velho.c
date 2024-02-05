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

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    int idade[n];
    char nome[n][50];

    for(int i=0;i<n;i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }

    int maior = idade[0];
    int posMaior = 0;

    for(int i=0;i<n;i++){
        if(idade[i]>= maior){
            maior = idade[i];
            posMaior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nome[posMaior]);

    return 0;

}