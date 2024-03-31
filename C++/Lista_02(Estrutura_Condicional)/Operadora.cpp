#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int minutos;
    double valorAPagar;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos>100){
        valorAPagar = 50.00 + (minutos-100)*2.00;
    }
    else{
        valorAPagar = 50.00;
    }

    cout << "Valor a pagar: R$ " << fixed << setprecision(2) << valorAPagar;

    return 0;

}