using System;
using System.Globalization;

namespace Medidas{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite a medida A: ");
            double a  = double.Parse(Console.ReadLine(),ci);

            Console.Write("Digite a medida B: ");
            double b = double.Parse(Console.ReadLine(),ci);

            Console.Write("Digite a medida C: ");
            double c = double.Parse(Console.ReadLine(),ci);

            double quadrado = Math.Pow(a,2);

            double triangulo = a*b/2;

            double trapezio = (a+b)*c/2;

            Console.WriteLine("AREA DO QUADRADO = " + quadrado.ToString("F4",ci));
            Console.WriteLine("AREA DO TRAINGULO = " + triangulo.ToString("F4",ci));
            Console.Write("AREA DO TRAPEZIO = " + trapezio.ToString("F4",ci));

        }

    }
    
}