#include <iostream>

using namespace std;

int main(){

    double glicose;
    string classificacao;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if(glicose<=100){
        classificacao = "normal";
    }
    else if(glicose<=140){
        classificacao = "elevado";
    }
    else{
        classificacao = "diabetes";
    }

    cout << "Classificacao: " << classificacao;

    return 0;

}