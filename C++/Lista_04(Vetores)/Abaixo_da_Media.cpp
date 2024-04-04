#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    double vet[n];

    for(int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl;

    double soma=0.0;

    for(int i=0;i<n;i++){
        soma += vet[i];
    }

    double media = soma/n;

    cout << "MEDIA DO VETOR = " << fixed << setprecision(3) << media << endl;

    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;

    for(int i=0;i<n;i++){
        if(vet[i]<media){
            cout << fixed << setprecision(1) << vet[i] << endl;
        }
    }

    return 0;

}