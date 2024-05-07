using System;
using System.Globalization;

namespace Circulo{
    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite o valor do raio do circulo: ");
            double raio = double.Parse(Console.ReadLine(),ci);

            double area = Math.PI * Math.Pow(raio,2);

            Console.Write("AREA = " + area.ToString("F3",ci));

        }

    }
    
}