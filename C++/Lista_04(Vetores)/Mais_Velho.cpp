#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nome[n];
    int idade[n];

    for(int i=0;i<n;i++){
        cout << "Dados da " << (i+1) << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
    }

    int maisVelho = idade[0];
    string nomeDoMaisVelho = nome[0];

    for(int i=0;i<n;i++){
        if(idade[i]>maisVelho){
            maisVelho = idade[i];
            nomeDoMaisVelho = nome[i];
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomeDoMaisVelho;

    return 0;

}