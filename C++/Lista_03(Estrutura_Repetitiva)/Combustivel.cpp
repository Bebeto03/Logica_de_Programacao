#include <iostream>

using namespace std;

int main(){

    int codigo, contA=0, contG=0, contD=0;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> codigo;

    while (codigo!=4){
        if(codigo==1){
            contA++;
        }
        else if(codigo==2){
            contG++;
        }
        else if(codigo==3){
            contD++;
        }
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> codigo;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << contA << endl;
    cout << "Gasolina: " << contG << endl;
    cout << "Diesel: " << contD;

    return 0;

}