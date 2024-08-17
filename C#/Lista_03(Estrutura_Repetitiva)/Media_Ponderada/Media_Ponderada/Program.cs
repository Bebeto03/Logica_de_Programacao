using System;
using System.Globalization;

namespace Media_Ponderada{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantos casos voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            for(int i = 0; i < n; i++){

                Console.WriteLine("Digite tres numeros:");
                double n1 = double.Parse(Console.ReadLine(),ci);
                double n2 = double.Parse(Console.ReadLine(),ci);
                double n3 = double.Parse(Console.ReadLine(),ci);

                double media = (2*n1+3*n2+5*n3)/10;

                Console.WriteLine("MEDIA = " + media.ToString("F1",ci));

            }

        }

    }
    
}