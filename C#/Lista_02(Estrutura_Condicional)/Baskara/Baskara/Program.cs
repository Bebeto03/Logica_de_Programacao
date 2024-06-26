using System;
using System.Globalization;

namespace Baskara{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Coeficiente a: ");
            double a = double.Parse(Console.ReadLine(),ci);

            Console.Write("Coeficiente b: ");
            double b = double.Parse(Console.ReadLine(),ci);

            Console.Write("Coeficiente c: ");
            double c = double.Parse(Console.ReadLine(),ci);

            double delta = Math.Pow(b,2)-(4*a*c);

            if(delta>0){
                double x1 = (-b+Math.Sqrt(delta))/(2*a);
                double x2 = (-b-Math.Sqrt(delta))/(2*a);
                Console.WriteLine("X1 = " + x1.ToString("F4",ci));
                Console.Write("X2 = " + x2.ToString("F4",ci));
            }
            else if(delta<0){
                Console.Write("Esta equacao nao possui raizes reais.");
            }
            else{
                double x = -b/(2*a);
                Console.Write("X = " + x.ToString("F4",ci));
            }

        }

    }

}