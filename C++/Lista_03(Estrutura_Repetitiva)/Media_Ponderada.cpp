#include <iostream>
#include <iomanip>

using namespace std;

int main(){


    int n;
    double valor1, valor2, valor3, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "Digite tres numeros:" << endl;
        cin >> valor1;
        cin >> valor2;
        cin >> valor3;
        media = (2*valor1+3*valor2+5*valor3)/10;
        cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    }

    return 0;

}