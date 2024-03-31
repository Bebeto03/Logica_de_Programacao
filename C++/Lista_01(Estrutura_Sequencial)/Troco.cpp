#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double precoUnitarioDoProduto, dinheiroRecebido, troco;
    int quantidadeComprada;

    cout << "Preco unitario do produto: ";
    cin >> precoUnitarioDoProduto;

    cout << "Quantidade comprada: ";
    cin >> quantidadeComprada;

    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;

    troco = dinheiroRecebido - precoUnitarioDoProduto*quantidadeComprada;

    cout << "TROCO = " << fixed << setprecision(2) << troco;

    return 0;

}