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
    cout << "VALORES =";

    for(int i=0;i<n;i++){
        cout << "  " << fixed << setprecision(1) << vet[i];
    }

    double soma = 0;

    for(int i=0;i<n;i++){
        soma+=vet[i];
    }

    cout << endl;
    cout << "SOMA = " << fixed << setprecision(2) << soma << endl;

    double media = soma/n;

    cout << "MEDIA = " << fixed << setprecision(2) << media;
    
    return 0;

}