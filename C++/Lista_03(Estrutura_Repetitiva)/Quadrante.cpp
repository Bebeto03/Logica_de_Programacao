#include <iostream>

using namespace std;

int main(){

    double x, y;

    cout << "Digite os valores das coordenadas X e Y:" << endl;
    cin >> x;
    cin >> y;

    while (x!=0 && y!=0){
        if (x>0 && y>0){
            cout << "QUADRANTE Q1" << endl;
        }
        else if (x<0 && y>0){
            cout << "QUADRANTE Q2" << endl;
        }
        else if (x<0 && y<0){
            cout << "QUADRANTE Q3" << endl;
        }
        else{
            cout << "QUADRANTE Q4" << endl;
        }
        cout << "Digite os valores das coordenadas X e Y:" << endl;
        cin >> x;
        cin >> y;
    }

    return 0;

}