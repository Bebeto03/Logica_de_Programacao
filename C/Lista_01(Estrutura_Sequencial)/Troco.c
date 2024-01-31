#include <stdio.h>

int main () { 

    double precoUnitario;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);

    int quantidadeComprada;

    printf("Quantidade comprada: ");
    scanf("%d", &quantidadeComprada);

    double dinheiroRecebido;

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    double troco = dinheiroRecebido - precoUnitario*quantidadeComprada;

    printf("TROCO = %.2lf", troco);

}