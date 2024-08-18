using System;
using System.Globalization;

namespace Dados_Pessoas{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantas pessoas serao digitadas? ");
            int n = int.Parse(Console.ReadLine());

            double[] altura = new double[n];
            char[] genero = new char[n];

            for(int i=0;i<altura.Length;i++){

                Console.Write("Altura da " + (i+1) + "a pessoa: ");
                altura[i] = double.Parse(Console.ReadLine(),ci);
                Console.Write("Genero da " + (i+1) + "a pessoa: ");
                genero[i] = char.Parse(Console.ReadLine());

            }

            double menor = altura[0], maior = altura[0];

            for(int i=0;i<altura.Length;i++){

                if(altura[i]>maior){
                    maior = altura[i];
                }

                if(altura[i]<menor){
                    menor = altura[i];
                }

            }

            Console.WriteLine("Menor altura = " + menor.ToString("F2",ci));
            Console.WriteLine("Maior altura = " + maior.ToString("F2",ci));

            double somaAlturasF = 0.00;
            int contF = 0;

            for(int i=0;i<altura.Length;i++){

                if(genero[i] == 'F'){
                    somaAlturasF += altura[i];
                    contF++;
                }

            }

            double mediaAlturasF = somaAlturasF/contF;

            Console.WriteLine("Media das alturas das mulheres = " + mediaAlturasF.ToString("F2",ci));

            int contM = 0;

            for(int i=0;i<genero.Length;i++){

                if(genero[i] == 'M'){
                    contM++;
                }

            }

            Console.Write("Numero de homens = " + contM);

        }

    }
    
}