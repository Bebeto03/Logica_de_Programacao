#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double raio, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = raio * raio * 3.14159;

    cout << "AREA = " << fixed << setprecision(3) << area;

    return 0;
    
}