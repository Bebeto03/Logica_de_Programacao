using System;
using System.Globalization;

namespace Experiencias{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            int total=0, ratos=0, sapos=0, coelhos=0;
            double perR, perS, perC;

            Console.Write("Quantos casos de teste serao digitados? ");
            int n = int.Parse(Console.ReadLine());

            for(int i=0;i<n;i++){
                
                Console.Write("Quantidade de cobaias: ");
                int cobaias = int.Parse(Console.ReadLine());

                total += cobaias;

                Console.Write("Tipo de cobais: ");
                string tipo = Console.ReadLine();

                if(tipo.Equals("R")){
                    ratos += cobaias;
                }
                else if(tipo.Equals("S")){
                    sapos += cobaias;
                }
                else if(tipo.Equals("C")){
                    coelhos += cobaias;
                }

            }

            Console.WriteLine("\nRELATORIO FINAL:");
            Console.WriteLine("Total: " + total + " cobaias");
            Console.WriteLine("Total de coelhos: " + coelhos);
            Console.WriteLine("Total de ratos: " + ratos);
            Console.WriteLine("Total de sapos: " + sapos);

            perR = (double)ratos/total*100;
            perS = (double)sapos/total*100;
            perC = (double)coelhos/total*100;

            Console.WriteLine("Percentual de coelhos: " + perC.ToString("F2",ci));
            Console.WriteLine("Percentual de ratos: " + perR.ToString("F2",ci));
            Console.WriteLine("Percentual de sapos: " + perS.ToString("F2",ci));

        }

    }

}