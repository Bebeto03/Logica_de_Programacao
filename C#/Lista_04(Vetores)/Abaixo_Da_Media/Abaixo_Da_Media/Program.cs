using System;
using System.Globalization;

namespace Abaixo_Da_Media{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantos elementos vai ter o vetor? ");
            int n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for(int i=0;i<vet.Length;i++){

                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(),ci);

            }

            double soma = 0.0;

            for(int i=0;i<vet.Length;i++){

                soma += vet[i];

            }

            double media = soma/vet.Length;

            Console.WriteLine("\nMEDIA DO VETOR = " + media.ToString("F3",ci));

            Console.WriteLine("ELEMENTOS ABAIXO DA MEDIA:");
            for(int i=0;i<vet.Length;i++){

                if(vet[i]<media){
                    Console.WriteLine(vet[i].ToString("F1",ci));
                }

            }

        }

    }

}