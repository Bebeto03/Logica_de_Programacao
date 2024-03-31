#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double dist1, dist2, dist3, maior;

    cout << "Digite as tres distancias:" << endl;
    cin >> dist1;
    cin >> dist2;
    cin >> dist3;

    if(dist1>=dist2 && dist1>=dist3){
        maior = dist1;
    }
    else if(dist2>=dist1 && dist2>=dist3){
        maior = dist2;
    }
    else{
        maior = dist3;
    }

    cout << "MAIOR DISTANCIA = " << fixed << setprecision(2) << maior;

    return 0;

}