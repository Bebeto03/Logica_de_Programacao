#include <iostream>

using namespace std;

int main(){

    int numero, soma;

    cout << "Digite um numero: ";
    cin >> numero;

    while (numero!=0){
        if(numero%2==0){
            soma = 5*numero+20;
        }
        else{
            soma = 5*numero+25;
        }
        cout << "SOMA = " << soma << endl;
        cout << "Digite um numero: ";
        cin >> numero;
    }

    return 0;

}