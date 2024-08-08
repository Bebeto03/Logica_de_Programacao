using System;
using System.Globalization;

namespace Dardo{

    class Program{

        static void Main(string[] args){

            CultureInfo ci =  CultureInfo.InvariantCulture;

            Console.WriteLine("Digite as tres distancias:");

            double d1 = double.Parse(Console.ReadLine(),ci);
            double d2 =  double.Parse(Console.ReadLine(),ci);
            double d3 = double.Parse(Console.ReadLine(),ci);

            double maiorD;

            if(d1>=d2 && d1>=d3){
                maiorD = d1;
            }
            else if(d2>=d1 && d2>=d3){
                maiorD = d2;
            }
            else{
                maiorD = d3;
            }

            Console.Write("MAIOR DISTANCIA = " + maiorD.ToString("F2",ci));
            
        }
    }
}