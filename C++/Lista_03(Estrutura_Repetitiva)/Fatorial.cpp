#include <iostream>

using namespace std;

int main(){

    int n, fat=1;

    cout << "Digite o valor de N: ";
    cin >> n;

    if(n==0 || n==1){
        cout << "FATORIAL = 1";
    }
    else{
        for(int i=n;i>0;i--){
            fat = fat * i;
        }
        cout << "FATORIAL = " << fat;
    }

    return 0;

}