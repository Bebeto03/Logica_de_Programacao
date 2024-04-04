#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main(){

    int n;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string nome[n];
    double precoCompra[n], precoVenda[n];

    for(int i=0;i<n;i++){
        cout << "Produto " << (i+1) << ":" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Preco de compra: ";
        cin >> precoCompra[i];
        cout << "Preco de venda: ";
        cin >> precoVenda[i];
    }

    int cont1=0,cont2=0,cont3=0;

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
    }

    cout << endl;
    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << cont1 << endl;
    cout << "Lucro entre 10%% e 20%: " << cont2 << endl;
    cout << "Lucro acima de 20%: " << cont3 << endl;

    double somaCompra=0.00, somaVenda=0.00;

    for(int i=0;i<n;i++){
        somaCompra+=precoCompra[i];
        somaVenda+=precoVenda[i];
    }

    double lucro = somaVenda-somaCompra;

    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << somaCompra << endl;
    cout << "Valor total de venda: " << somaVenda << endl;
    cout << "Lucro total: " << lucro;
    
    return 0;

}