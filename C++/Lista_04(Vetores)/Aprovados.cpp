#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nome[n];
    double nota1[n], nota2[n], media[n];

    for(int i=0;i<n;i++){
        cout << "Digite nome, primeira e segunda nota do " << (i+1) << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cin >> nota1[i];
        cin >> nota2[i];
    }

    for(int i=0;i<n;i++){
        media[i] = (nota1[i]+nota2[i])/2;
    }

    cout << "Alunos aprovados:" << endl;

    for(int i=0;i<n;i++){
        if(media[i]>=6.0){
            cout << nome[i] <<endl;
        }
    }

    return 0;

}