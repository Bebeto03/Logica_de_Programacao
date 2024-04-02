#include <iostream>

using namespace std;

int main(){

    int x, y, soma=0;

    cout << "Digite dois numeros:" << endl;
    cin >> x;
    cin >> y;

    if (x>y){
        for(int i=y+1;i<x;i++){
            if(i%2!=0){
                soma += i;
            }
        }
    }
    else{
        for(int i=x+1;i<y;i++){
            if(i%2!=0){
                soma+=i;
            }
        }
    }

    cout << "SOMA DOS IMPARES = " << soma;

    return 0;

}