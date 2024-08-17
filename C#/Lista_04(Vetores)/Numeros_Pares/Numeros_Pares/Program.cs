using System;

namespace Numeros_Pares{

    class Program{

        static void Main(string[] args){

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            int[] vet = new int[n];

            for(int i=0;i<vet.Length;i++){

                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());

            }

            Console.WriteLine("\nNUMEROS PARES:");

            for(int i=0;i<vet.Length;i++){

                if(vet[i] % 2 == 0){
                    Console.Write(vet[i] + "  ");
                }

            }

            int cont = 0;

            for(int i=0;i<vet.Length;i++){

                if(vet[i] % 2 ==0){
                    cont++;
                }

            }

            Console.Write("\n\nQUANTIDADE DE PARES = " + cont);

        }

    }

}