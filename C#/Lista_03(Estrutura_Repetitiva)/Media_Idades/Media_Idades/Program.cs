using System;
using System.Globalization;

namespace Media_Idades{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.WriteLine("Digite as idades:");
            int idade = int.Parse(Console.ReadLine());

            int soma=0, cont=0;

            while(idade>=0){
                cont++;
                soma+=idade;
                idade = int.Parse(Console.ReadLine());
            }

            if(cont==0){
                Console.WriteLine("IMPOSSIVEL CALCULAR");
            }
            else{
                double media = (double)soma/cont;
                Console.WriteLine("MEDIA = "+ media.ToString("F2",ci));
            }

        }

    }
    
}