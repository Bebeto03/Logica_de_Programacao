#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nome[n];
    int idade[n];
    double altura[n];

    for(int i=0;i<n;i++){
        cout << "Dados da " << (i+1) << "a pessoa:" << endl;
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    double somaAlturas = 0.00;

    for(int i=0;i<n;i++){
        somaAlturas += altura[i];
    }

    double mediaAlturas = somaAlturas/n;

    int contMenos16 = 0;

    for(int i=0;i<n;i++){
        if(idade[i]<16){
            contMenos16++;
        }
    }

    double perMenos16 = (double) contMenos16*100/n;

    cout << endl;
    cout << "Altura media: " << fixed << setprecision(2) << mediaAlturas << endl;
    cout << "Pessoas com menos de 16 anos: " << fixed << setprecision(1) << perMenos16 << "%" << endl;

    for(int i=0;i<n;i++){
        if(idade[i]<16){
            cout << nome[i]<<endl;
        }
    }

    return 0;

}