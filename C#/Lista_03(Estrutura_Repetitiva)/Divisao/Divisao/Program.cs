using System;
using System.Globalization;

namespace Divisao{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantos casos voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            for(int i = 0; i < n; i++){

                Console.Write("Entre com o numerador: ");
                double num = double.Parse(Console.ReadLine(),ci);

                Console.Write("Entre com o denominador: ");
                double den = double.Parse(Console.ReadLine(),ci);

                if(den == 0){
                    Console.WriteLine("DIVISAO IMPOSSIVEL");
                }
                else{
                    double div = num/den;
                    Console.WriteLine("DIVISAO = " + div.ToString("F2",ci));
                }

            }

        }

    }
    
}