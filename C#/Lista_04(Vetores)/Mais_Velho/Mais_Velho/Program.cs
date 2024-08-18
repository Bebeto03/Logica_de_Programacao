using System;

namespace Mais_Velho{

    class Program{

        static void Main(string[] args){

            Console.Write("Quantas pessoas voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            string[] nome = new string[n];
            int[] idade = new int[n];

            for(int i=0;i<nome.Length;i++){

                Console.WriteLine("Dados da " + (i+1) + "a pessoa:");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idade[i] = int.Parse(Console.ReadLine());

            }

            int maior = idade[0];
            string maisVelho = nome[0];

            for(int i=0;i<nome.Length;i++){

                if(idade[i]>maior){
                    maior = idade[i];
                    maisVelho = nome[i];
                }

            }

            Console.Write("PESSOA MAIS VELHA: " + maisVelho);

        }

    }
    
}