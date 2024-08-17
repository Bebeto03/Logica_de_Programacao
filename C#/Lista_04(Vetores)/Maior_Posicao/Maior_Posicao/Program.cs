using System;
using System.Globalization;

namespace Maior_Posicao{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for(int i=0;i<vet.Length;i++){

                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(),ci);

            }

            double maior = vet[0];
            int pos = 0;

            for(int i=0;i<vet.Length;i++){

                if(vet[i]>maior){
                    maior = vet[i];
                    pos = i;
                }

            }

            Console.WriteLine("\nMAIOR VALOR = " + maior.ToString("F1",ci));
            Console.Write("POSICAO DO MAIOR VALOR = " + pos);

        }
    }
}