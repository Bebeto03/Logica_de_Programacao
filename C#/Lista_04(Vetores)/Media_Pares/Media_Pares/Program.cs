using System;
using System.Globalization;

namespace Media_Pares{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantos elementos vai ter o vetor? ");
            int n = int.Parse(Console.ReadLine());

            int[] vet = new int[n];

            for(int i=0;i<vet.Length;i++){

                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());

            }

            int soma = 0, cont = 0;

            for(int i=0;i<vet.Length;i++){

                if(vet[i] % 2 == 0){
                    soma += vet[i];
                    cont++;
                }

            }

            if(cont==0){
                Console.WriteLine("NENHUM NUMERO PAR");
            }
            else{
                double media = (double)soma/cont;
                Console.WriteLine("MEDIA DOS PARES = " + media.ToString("F1",ci));
            }

        }
    }
}