using System;
using System.Globalization;

namespace Validacao_de_Nota{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite a primeira nota: ");
            double n1 = double.Parse(Console.ReadLine(),ci);

            while(n1<0.0 || n1>10.0){
                Console.Write("Valor invalido! Tente novamente: ");
                n1 = double.Parse(Console.ReadLine(),ci);
            }

            Console.Write("Digite a segunda nota: ");
            double n2 = double.Parse(Console.ReadLine(),ci);

            while(n2<0.0 || n2>10.0){
                Console.Write("Valor invalido! Tente novamente: ");
                n2 = double.Parse(Console.ReadLine(),ci);
            }

            double media = (n1+n2)/2;

            Console.Write("MEDIA = " + media.ToString("F2",ci));

        }

    }
    
}