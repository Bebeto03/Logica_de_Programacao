#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double precoProduto, aPagar;
    int quantidade;
    double dinheiroRcebido, troco;

    cout << "Preco unitario do produto: ";
    cin >> precoProduto;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    aPagar = precoProduto*quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiroRcebido;

    if (dinheiroRcebido<aPagar){
        troco = aPagar-dinheiroRcebido;
        cout << "DINHHEIRO INSUFICIENTE. FALTAM " << fixed << setprecision(2) << troco << " REAIS.";
    }
    else{
        troco = dinheiroRcebido-aPagar;
        cout << "TROCO = " << fixed << setprecision(2) << troco;
    }

    return 0;

}