#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double salario, novoSalario, aumento;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if (salario<=1000.00){
        novoSalario = salario * 1.20;
        porcentagem = 20;
    }
    else if (salario<=3000.00){
        novoSalario = salario*1.15;
        porcentagem = 15;
    }
    else if (salario<=8000.00){
        novoSalario = salario*1.10;
        porcentagem = 10;
    }
    else{
        novoSalario = salario*1.05;
        porcentagem = 5;
    }

    aumento = novoSalario-salario;

    cout << "Novo salario = R$ " << fixed << setprecision(2) << novoSalario << endl;
    cout << "Aumento = R$ " << fixed << setprecision(2) << aumento << endl;
    cout << "Porcentagem = " << porcentagem << " %";

    return 0;

}