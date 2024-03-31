#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double distanciaPercorrida, combustivelGasto, consumoMedio;

    cout << "Distancia percorrida: ";
    cin >> distanciaPercorrida;

    cout << "Combustivel gasto: ";
    cin >> combustivelGasto;

    consumoMedio = distanciaPercorrida/combustivelGasto;

    cout << "Consumo medio = " << fixed << setprecision(3) << consumoMedio;

    return 0;

}