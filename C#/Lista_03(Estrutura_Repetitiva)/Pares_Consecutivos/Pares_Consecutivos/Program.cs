using System;

namespace Pares_Consecutivos{

    class Program{

        static void Main(string[] args){

            Console.Write("Digite um numero inteiro: ");
            int n = int.Parse(Console.ReadLine());

            while(n!=0){
                if(n%2==0){
                    Console.WriteLine("SOMA = " + (5*n+20));
                }
                else{
                    Console.WriteLine("SOMA = " + (5*n+25));
                }
                Console.Write("Digite um numero inteiro: ");
                n = int.Parse(Console.ReadLine());
            }

        }
        
    }

}