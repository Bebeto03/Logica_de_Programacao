﻿using System;
using System.Globalization;

namespace Coordenadas{

    class Program{
        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Valor de X: ");
            double x = double.Parse(Console.ReadLine(),ci);

            Console.Write("Valor de Y: ");
            double y = double.Parse(Console.ReadLine(),ci);

            if(x>0.0 && y>0.0){
                Console.WriteLine("Q1");
            }
            else if(x<0.0 && y>0.0){
                Console.WriteLine("Q2");
            }
            else if(x<0.0 && y<0.0){
                Console.WriteLine("Q3");
            }
            else if(x>0.0 && y<0.0){
                Console.WriteLine("Q4");
            }
            else if(x!=0.0 && y==0.0){
                Console.WriteLine("Eixo X");
            }
            else if(x==0.0 && y!=0.0){
                Console.WriteLine("Eixo Y");
            }
            else{
                Console.WriteLine("Origem");
            }

        }

    }

}