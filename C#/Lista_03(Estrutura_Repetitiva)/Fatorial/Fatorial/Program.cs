using System;

namespace Fatorial{

    class Program{

        static void Main(string[] args){

            Console.Write("Digite o valor de N: ");
            int n = int.Parse(Console.ReadLine());

            int fat = 1;

            if(n==0 || n==1){
                fat = 1;
            }
            else{
                for(int i=n;i>0;i--){
                    fat *= i;
                }
            }

            Console.Write("FATORIAL = " + fat);

        }

    }
    
}