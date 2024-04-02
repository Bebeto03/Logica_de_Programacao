#include <iostream>

using namespace std;

int main(){

    int n, x, contD=0, contF=0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "Digite um numero: ";
        cin >> x;
        if(x<10 || x>20){
            contF++;
        }
        else{
            contD++;
        }
    }

    cout << contD << " DENTRO" << endl;
    cout << contF << " FORA";

    return 0;

}