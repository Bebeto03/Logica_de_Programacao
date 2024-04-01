#include <iostream>

using namespace std;

int main(){

    int horaInicial, horaFinal, duracao;

    cout << "Hora inicial: ";
    cin >> horaInicial;

    cout << "Hora final: ";
    cin >> horaFinal;

    if (horaFinal<=horaInicial){
        duracao = (horaFinal+24) - horaInicial;
    }
    else{
        duracao = horaFinal-horaInicial;
    }

    cout << "O JOGO DUROU " << duracao << " HORAS(S)";

    return 0;

}