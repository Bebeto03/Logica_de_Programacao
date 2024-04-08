#include <iostream>

using namespace std;

int main(){

    int m,n;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> m;

    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> n;

    int matA[m][n], matB[m][n], matS[m][n];

    cout << "Digite os elementos da matriz A:" << endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matA[i][j];
        }
    }

    cout << "Digite os elementos da matriz B:" << endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matB[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matS[i][j] = matA[i][j] + matB[i][j];
        }
    }

    cout << "MATRIZ SOMA:" << endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << matS[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
    
}