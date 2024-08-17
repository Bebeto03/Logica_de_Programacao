using System;

namespace Dentro_Fora{

    class Program{

        static void Main(string[] args){

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            int dentro=0, fora=0;

            for(int i=0;i<n;i++){
                Console.Write("Digite um numero: ");
                int x = int.Parse(Console.ReadLine());
                if(x>=10 && x<=20){
                    dentro++;
                }
                else{
                    fora++;
                }
            }

            Console.WriteLine(dentro + " DENTRO");
            Console.Write(fora + " FORA");

        }

    }

}