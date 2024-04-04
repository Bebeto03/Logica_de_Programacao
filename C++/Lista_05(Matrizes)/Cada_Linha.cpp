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

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;

    for(int i=0;i<n;i++){
        int maior = mat[i][0];
        for(int j=0;j<n;j++){
            if(mat[i][j]>maior){
                maior = mat[i][j];
            }
        }
        cout << maior << endl;
    }

    return 0;

}