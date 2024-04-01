#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char escala;
    double temperaturaRecebida, temperaturaConvertida;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    if (escala=='F'){
        cout << "Digite atemperatura em Fahrenheit: ";
        cin >> temperaturaRecebida;
        temperaturaConvertida = 5*(temperaturaRecebida-32)/9;
        cout << "Temperatura equivalente em Celsius: " << fixed << setprecision(2) << temperaturaConvertida;
    }
    else if (escala=='C'){
        cout << "Digite a temperatura em Celsius: ";
        cin >> temperaturaRecebida;
        temperaturaConvertida = 9*temperaturaRecebida/5 + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << fixed << setprecision(2) << temperaturaConvertida;
    }

    return 0;

}