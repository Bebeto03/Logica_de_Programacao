#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int m,n;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> m;

    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> n;

    double mat[m][n];

    for(int i=0;i<m;i++){
        cout << "Digite os elementos da " << (i+1) << "a. linha:" << endl;
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }

    double vet[m];

    for(int i=0;i<m;i++){
        vet[i] = 0.0;
        for(int j=0;j<n;j++){
            vet[i]+= mat[i][j];
        }
    }

    cout << "VETOR GERADO:" << endl;

    for(int i=0;i<m;i++){
        cout << fixed << setprecision(1) << vet[i] << endl;
    }

    return 0;

}