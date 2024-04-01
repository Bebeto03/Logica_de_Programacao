#include <iostream>

using namespace std;

int main(){

    string senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while(senha!="2002"){
        cout << "Senha invalida! Tente novamente: ";
        cin >> senha;
    }

    cout << "Acesso permitido!";

    return 0;

}