#include <stdio.h>

int main () {

    double antigoSalario;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &antigoSalario);

    double novoSalario, aumento;

    int porcentagem;

    if (antigoSalario<=1000.00){
        novoSalario = antigoSalario + (antigoSalario/5);
        aumento = novoSalario - antigoSalario;
        porcentagem = 20;
    }
    else if (antigoSalario<=3000.00){
        novoSalario = antigoSalario + ((antigoSalario*3)/20);
        aumento = novoSalario - antigoSalario;
        porcentagem = 15;
    }
    else if (antigoSalario<=8000.00){
        novoSalario = antigoSalario + (antigoSalario/10);
        aumento = novoSalario - antigoSalario;
        porcentagem = 10;
    }
    else{
        novoSalario = antigoSalario + (antigoSalario/20);
        aumento = novoSalario - antigoSalario;
        porcentagem = 5;
    }

    printf("Novo salario = R$ %.2lf\n", novoSalario);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %d %%", porcentagem);

    return 0;
    
}