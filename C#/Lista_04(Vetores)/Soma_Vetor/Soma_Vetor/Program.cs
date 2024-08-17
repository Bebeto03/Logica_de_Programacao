using System;
using System.Globalization;

namespace Soma_Vetor{

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

            Console.Write("\nVALORES = ");

            for(int i=0;i<vet.Length;i++){

                Console.Write(vet[i].ToString("F1",ci) + "  ");

            }

            double soma = 0;

            for(int i=0;i<vet.Length;i++){

                soma += vet[i];

            }

            Console.WriteLine("\nSOMA = " + soma.ToString("F2",ci));

            double media = soma/n;

            Console.WriteLine("MEDIA = " + media.ToString("F2",ci));

        }
    }
}