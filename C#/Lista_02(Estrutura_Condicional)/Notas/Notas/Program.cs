using System;
using System.Globalization;

namespace Notas{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite a primeira nota: ");
            float n1 = float.Parse(Console.ReadLine(),ci);

            Console.Write("Digite a segunda nota: ");
            float n2 = float.Parse(Console.ReadLine(),ci);

            float nF = n1+n2;

            Console.WriteLine("NOTA FINAL = " + nF.ToString("F1",ci));

            if(nF<60.00){
                Console.Write("REPROVADO");
            }

        }

    }
    
}