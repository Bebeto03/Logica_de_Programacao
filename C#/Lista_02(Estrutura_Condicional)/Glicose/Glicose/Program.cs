using System;
using System.Globalization;

namespace Glicose{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite a medida da glicose: ");
            double glicose = double.Parse(Console.ReadLine(),ci);

            string classificacao;

            if(glicose<=100.0){
                classificacao = "normal";
            }
            else if(glicose<=140.0){
                classificacao = "elevado";
            }
            else{
                classificacao = "diabetes";
            }

            Console.Write("Classificacao: " + classificacao);

        }
    }
}