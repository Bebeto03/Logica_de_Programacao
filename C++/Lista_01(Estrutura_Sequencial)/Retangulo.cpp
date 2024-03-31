#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    double base, altura;
    double area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;

    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base*altura;

    perimetro = 2*base+2*altura;

    diagonal = sqrt(pow(base,2)+pow(altura,2));

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal;

    return 0;

}