#include <stdio.h>

int main () {

    double nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    double notaFinal = nota1 + nota2;

    printf("NOTA FINAL = %.1lf\n", notaFinal);

    if (notaFinal<60.00){
        printf("REPROVADO");
    }
    
    return 0;
    
}