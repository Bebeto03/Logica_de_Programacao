#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int codigo, quantidade;
    double valorAPagar;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    switch(codigo){
        case 1:
            valorAPagar = quantidade * 5.00;
            break;
        case 2:
            valorAPagar = quantidade * 3.50;
            break;
        case 3:
            valorAPagar = quantidade * 4.80;
            break;
        case 4:
            valorAPagar = quantidade * 8.90;
            break;
        case 5:
            valorAPagar = quantidade * 7.32;
            break;
        default:
            valorAPagar = 0.00;
            break;
    }

    cout << "Valor a pagar: R$ " << fixed << setprecision(2) << valorAPagar;

    return 0;

}