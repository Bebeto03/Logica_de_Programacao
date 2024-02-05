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

int main() {

    int n;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nome[n][50];
    double nota1[n], nota2[n];

    for(int i=0;i<n;i++){
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i+1);
        limpar_entrada();
        ler_texto(nome[i], 50);
        scanf("%lf", &nota1[i]);
        scanf("%lf", &nota2[i]);
    }

    double media[n];

    printf("ALUNOS APROVADOS:\n");

    for(int i=0;i<n;i++){
        media[i] = (nota1[i]+nota2[i])/ 2;
        if (media[i]>=6.0){
            printf("%s\n", nome[i]);
        }
    }

    return 0;

}