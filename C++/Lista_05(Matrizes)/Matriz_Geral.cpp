#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    double soma = 0.0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]>0){
                soma += mat[i][j];
            }
        }
    }

    cout << endl;
    cout << "SOMA DOS POSITIVOS: " << fixed << setprecision(1) << soma;
    cout << endl << endl;

    int linha, coluna;

    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA:";
    for(int j=0;j<n;j++){
        cout << "  " << fixed << setprecision(1) << mat[linha][j];
    }

    cout << endl << endl;

    cout << "Escolha uma coluna: ";
    cin >> coluna;

    cout << "COLUNA ESCOLHIDA:";
    for(int i=0;i<n;i++){
        cout << "  " << fixed << setprecision(1) << mat[i][coluna];
    }

    cout << endl << endl;

    cout << "DIAGONAL PRINCIPAL:";
    for(int i=0;i<n;i++){
        cout << " " << fixed << setprecision(1) << mat[i][i];
    }

    cout << endl << endl;

    cout << "MATRIZ ALTERADA:" <<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]<0){
                mat[i][j] = mat[i][j]*mat[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << fixed << setprecision(1) << mat[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;

}