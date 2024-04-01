#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int idade, cont=0;
    int soma=0;
    double media;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    while (idade>=0){
        soma += idade;
        cont++;
        cin >> idade;
    }

    if (cont==0){
        cout << "IMPOSSIVEL CALCULAR";
    }
    else{
        media = (double) soma/cont;
        cout << "MEDIA = " << fixed << setprecision(2) << media;
    }

    return 0;

}