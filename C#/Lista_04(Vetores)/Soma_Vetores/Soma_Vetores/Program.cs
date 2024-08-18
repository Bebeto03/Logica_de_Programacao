using System;

namespace Soma_Vetores{

    class Program{

        static void Main(string[] args){

            Console.Write("Quantos valores vai ter cada vetor? ");
            int n = int.Parse(Console.ReadLine());

            int[] vetA = new int[n];

            Console.WriteLine("Digite os valores do vetor A:");
            for(int i=0;i<vetA.Length;i++){

                vetA[i] = int.Parse(Console.ReadLine());

            }

            int[] vetB = new int[n];

            Console.WriteLine("Digite os valores do vetor B:");
            for(int i=0;i<vetB.Length;i++){

                vetB[i] = int.Parse(Console.ReadLine());

            }

            int[] vetC = new int[n];

            for(int i=0;i<vetC.Length;i++){

                vetC[i] = vetA[i] + vetB[i];

            }

            Console.WriteLine("VETOR RESULTANTE:");
            for(int i=0;i<vetC.Length;i++){

                Console.WriteLine(vetC[i]);

            }

        }

    }

}