using System;
using System.Globalization;

namespace Operadora{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite a quantidade de minutos: ");
            int minutos = int.Parse(Console.ReadLine());

            double aPagar;

            if (minutos<=100){
                aPagar = 50.00;
            }
            else{
                aPagar = 50.00 + (minutos-100)*2;
            }

            Console.Write("Valor a pagar: R$ " + aPagar.ToString("F2",ci));

        }
    }
}