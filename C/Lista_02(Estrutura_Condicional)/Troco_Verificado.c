#include <stdio.h>

int main () {

    double precoUnitario;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);

    int quantidade;

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    double dinheiroRecebido;

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    double total = precoUnitario * quantidade;

    if (dinheiroRecebido>=total) {

        double troco = dinheiroRecebido - total;
        printf("TROCO = %.2lf", troco);

    }
    else {

        double falta = total - dinheiroRecebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", falta);

    }

    return 0;

}