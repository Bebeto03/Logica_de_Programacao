#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for(int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl;

    double maior = vet[0];
    int posMaior = 0;

    for(int i=0;i<n;i++){
        if(vet[i]>maior){
            maior = vet[i];
            posMaior = i;
        }
    }

    cout << "MAIOR VALOR = " << fixed << setprecision(1) << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posMaior;

    return 0;

}