#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string nome;
    int horasTrabalhadas;
    double valorPorHora, pagamento;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorPorHora;

    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;

    pagamento = horasTrabalhadas*valorPorHora;

    cout << "O pagamento para " << nome << " deve ser " << fixed << setprecision(2) << pagamento;

    return 0;

}