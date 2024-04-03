#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, x, contR=0, contS=0, contC=0, total=0;
    char tipo;
    double perR, perS, perC;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    for(int i=0;i<n;i++){
        
        cout << "Quantidade de cobaias: ";
        cin >> x;
        cout << "Tipo de cobaia: ";
        cin >> tipo;
        
        total += x;

        if(tipo=='R'){
            contR += x;
        }
        else if(tipo=='S'){
            contS += x;
        }
        else if(tipo=='C'){
            contC += x;
        }

    }

    perR = (double) contR*100/total;
    perS = (double) contS*100/total;
    perC = (double) contC*100/total;

    cout << endl;
    cout << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << contC << endl;
    cout << "Total de ratos: " << contR << endl;
    cout << "Total de sapos: " << contS << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << perC << endl;
    cout << "Percentual de ratos: " << perR << endl;
    cout << "Percentual de sapos: " << perS;

    return 0;

}