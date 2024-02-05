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

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nome[n][50];
    double precoCompra[n];
    double precoVenda[n];

    for(int i=0;i<n;i++){
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
    }

    int cont1=0, cont2=0, cont3=0;
    double totalCompra=0, totalVenda=0;

    for(int i=0;i<n;i++){
        if(precoVenda[i]-precoCompra[i] < precoCompra[i]/10){
            cont1++;
        }
        else if(precoVenda[i]-precoCompra[i] < precoCompra[i]/5){
            cont2++;
        }
        else{
            cont3++;
        }
        totalCompra += precoCompra[i];
        totalVenda += precoVenda[i];
    }

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", cont1);
    printf("Lucro entre 10%% e 20%%: %d\n", cont2);
    printf("Lucro acima de 20%%: %d\n", cont3);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf", (totalVenda-totalCompra));

    return 0;

}