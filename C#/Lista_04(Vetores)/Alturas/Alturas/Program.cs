using System;
using System.Globalization;

namespace Alturas{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantas pessoas serao digitadas? ");
            int n = int.Parse(Console.ReadLine());

            string[] nome = new string[n];
            int[] idade = new int[n];
            double[] altura = new double[n];

            for(int i=0;i<nome.Length;i++){

                Console.WriteLine("Dadaos da " + (i+1) + "a pessoa:");
                
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();

                Console.Write("Idade: ");
                idade[i] = int.Parse(Console.ReadLine());

                Console.Write("Altura: ");
                altura[i] = double.Parse(Console.ReadLine(),ci);

            }

            double somaAlturas = 0.00;

            for(int i=0;i<altura.Length;i++){

                somaAlturas += altura[i];

            }

            double mediaAlturas = somaAlturas/altura.Length;

            Console.WriteLine("\nAltura media: " + mediaAlturas.ToString("F2",ci));

            int contMenosDe16 = 0;

            for(int i=0;i<idade.Length;i++){

                if(idade[i]<16){
                    contMenosDe16++;
                }

            }

            double perMenosDe16 = (double)contMenosDe16/idade.Length*100;

            Console.WriteLine("Pessoas com menos de 16 anos: " + perMenosDe16.ToString("F1",ci) + "%");

            for(int i=0;i<nome.Length;i++){

                if(idade[i]<16){
                    Console.WriteLine(nome[i]);
                }

            }

        }

    }

}