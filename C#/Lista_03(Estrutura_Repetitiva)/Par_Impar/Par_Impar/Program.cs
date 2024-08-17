using System;

namespace Par_Impar{

    class Program{

        static void Main(string[] args){

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            for(int i = 0; i < n; i++){

                Console.Write("Digite um numero: ");
                int x = int.Parse(Console.ReadLine());

                if(x == 0){
                    Console.WriteLine("NULO");
                }
                else if(x > 0 && x % 2 == 0){
                    Console.WriteLine("PAR POSITIVO");
                }
                else if(x > 0 && x % 2 !=0){
                    Console.WriteLine("IMPAR POSITIVO");
                }
                else if(x < 0 && x % 2 == 0){
                    Console.WriteLine("PAR NEGATIVO");
                }
                else{
                    Console.WriteLine("IMPAR NEGATIVO");
                }

            }

        }

    }
    
}