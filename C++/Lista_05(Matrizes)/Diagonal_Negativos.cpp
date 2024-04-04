#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;

    for(int i=0;i<n;i++){
        cout << mat[i][i] << " ";
    }

    cout << endl;

    int contN=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]<0){
                contN++;
            }
        }
    }

    cout << "QUANTIDADE DE NEGATIVOS = " << contN;

    return 0;

}