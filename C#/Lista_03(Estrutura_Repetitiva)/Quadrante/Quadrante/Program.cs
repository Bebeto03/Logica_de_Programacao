using System;
using System.Globalization;

namespace Quadrante{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.WriteLine("Digite os valores das coordenadas X e Y:");
            double x = double.Parse(Console.ReadLine(),ci);
            double y = double.Parse(Console.ReadLine(),ci);

            while(x!=0 && y!=0){
                if(x>0 && y>0){
                    Console.WriteLine("Quadrante Q1");
                }
                else if(x<0 && y>0){
                    Console.WriteLine("Quadrante Q2");
                }
                else if(x<0 && y<0){
                    Console.WriteLine("Quadrante Q3");
                }
                else{
                    Console.WriteLine("Quadrante Q4");
                }
                Console.WriteLine("Digite os valores das coordenadas X e Y:");
                x = double.Parse(Console.ReadLine(),ci);
                y = double.Parse(Console.ReadLine(),ci);
            }

        }

    }
    
}