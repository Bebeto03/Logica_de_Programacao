#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double altura[n];
    char genero[n];

    for(int i=0;i<n;i++){
        cout << "Altura da " << (i+1) << "a pessoa: ";
        cin >> altura[i];
        cout << "Genero da " << (i+1) << "a pessoa: ";
        cin >> genero[i];
    }

    double menor=altura[0], maior=altura[0];

    for(int i=0;i<n;i++){
        if(altura[i]<menor){
            menor = altura[i];
        }
        if(altura[i]>maior){
            maior = altura[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;

    double somaF=0.0;
    int contF=0, contM=0;

    for(int i=0;i<n;i++){
        if(genero[i]=='F'){
            contF++;
            somaF+=altura[i];
        }
        if(genero[i]=='M'){
            contM++;
        }
    }

    double mediaF = somaF/contF;

    cout << "Media das alturas das mulheres = " << fixed << setprecision(2) << mediaF << endl;

    cout << "Numero de homens = " << contM;

    return 0;
    
}