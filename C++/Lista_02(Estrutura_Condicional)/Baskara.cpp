#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){

    double a, b, c;
    double delta, x1, x2;

    cout << "Coeficiente A: ";
    cin >> a;

    cout << "Coeficiente B: ";
    cin >> b;

    cout << "Coeficiente C: ";
    cin >> c;

    delta = pow(b,2)-4*a*c;

    if (delta<0){
        cout << "Esta equacao nao possui raizes reais.";
    }
    else if (delta==0){
        x1 = -b/(2*a);
        cout << "X = " << fixed << setprecision(x1);
    }
    else{
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        cout << fixed << setprecision(4);
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2;
    }

    return 0;

}