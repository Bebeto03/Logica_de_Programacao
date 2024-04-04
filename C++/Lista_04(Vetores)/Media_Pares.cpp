#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n];

    for(int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    int somaPares=0, contPares=0;

    for(int i=0;i<n;i++){
        if(vet[i]%2==0){
            somaPares+=vet[i];
            contPares++;
        }
    }

    if(contPares==0){
        cout << "NENHUM NUMERO PAR";
    }
    else{
        double mediaPares = (double) somaPares/contPares;
        cout << "MEDIA DOS PARES: " << fixed << setprecision(1) << mediaPares;
    }

    return 0;

}