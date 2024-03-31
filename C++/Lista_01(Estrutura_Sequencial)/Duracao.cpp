#include <iostream>

using namespace std;

int main(){

    int duracao, hora, minuto, segundo;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    hora = duracao/3600;
    minuto = duracao%3600/60;
    segundo = duracao%3600%60;

    cout << hora << ":" << minuto << ":" << segundo;

    return 0;

}