using System;
using System.Globalization;

namespace Temperatura{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
            string escala = Console.ReadLine();

            if (escala == "C"){
                Console.Write("Digite a temperatura em Celsius: ");
                double temp = double.Parse(Console.ReadLine(),ci);
                double newTemp = 1.8*temp + 32;
                Console.Write("Temperatura em Fahrenheit: " + newTemp.ToString("F2",ci));
            }
            else if(escala == "F"){
                Console.Write("Digite a temperatura em Fahrenheit: ");
                double temp = double.Parse(Console.ReadLine(),ci);
                double newTemp = 5*(temp-32)/9;
                Console.Write("Temperatura em Celsius: " + newTemp.ToString("F2",ci));
            }

        }
    }
}