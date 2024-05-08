using System;
using System.Globalization;

namespace Consumo{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Distancia percorrida: ");
            int distancia = int.Parse(Console.ReadLine());

            Console.Write("Combustível gasto: ");
            double combustivelGasto = double.Parse(Console.ReadLine(),ci);

            double consumoMedio = distancia/combustivelGasto;

            Console.Write("Consumo medio = " + consumoMedio.ToString("F3",ci));

        }

    }
    
}