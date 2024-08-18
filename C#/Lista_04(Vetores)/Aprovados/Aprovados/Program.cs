using System;
using System.Globalization;

namespace Aprovados{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Quantos alunos serao digitados? ");
            int n = int.Parse(Console.ReadLine());

            string[] nome = new string[n];
            double[] nota1 = new double[n];
            double[] nota2 = new double[n];
            double[] media = new double[n];

            for(int i=0;i<nome.Length;i++){

                Console.WriteLine("Digite nome, primeira e segunda nota do " + (i+1) + "o aluno:");
                nome[i] = Console.ReadLine();
                nota1[i] = double.Parse(Console.ReadLine(),ci);
                nota2[i] = double.Parse(Console.ReadLine(),ci);

            }

            for(int i=0;i<nome.Length;i++){

                media[i] = (nota1[i]+nota2[i])/2;

            } 

            Console.WriteLine("Alunos aprovados:");
            for(int i=0;i<nome.Length;i++){

                if(media[i]>=6.0){
                    Console.WriteLine(nome[i]);
                }

            }

        }

    }
    
}