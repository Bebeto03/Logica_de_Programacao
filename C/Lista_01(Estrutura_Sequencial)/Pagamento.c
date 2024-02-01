#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) { 
    
    fgets(buffer, length, stdin); 
    strtok(buffer, "\n"); 

} 

int main () {

    char nome[50];

    printf("Nome: ");
    ler_texto(nome, 50);

    double valorPorHora;

    printf("Valor por hora: ");
    scanf("%lf", &valorPorHora);

    int horasTrabalhadas;

    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    double pagamento = valorPorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser de %.2lf", nome, pagamento);

    return 0;

}