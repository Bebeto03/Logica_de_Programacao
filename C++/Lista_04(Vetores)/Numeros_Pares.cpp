#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for(int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl;
    cout << "NUMEROS PARES:" << endl;

    for(int i=0;i<n;i++){
        if(vet[i]%2==0){
            cout << vet[i] << "  ";
        }
    }

    cout << endl << endl;

    int contPares=0;

    for(int i=0;i<n;i++){
        if(vet[i]%2==0){
            contPares++;
        }
    }

    cout << "QUANTIDADE DE PARES = " << contPares;

    return 0;

}