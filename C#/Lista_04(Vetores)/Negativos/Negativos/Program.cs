﻿using System;

namespace Negativos{

    class Program{

        static void Main(string[] args){

            Console.Write("Quantos numeros voce vai digitar? ");
            int n = int.Parse(Console.ReadLine());

            int[] vet = new int[n];

            for(int i=0;i<vet.Length;i++){

                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());

            }

            Console.WriteLine("NUMEROS NEGATIVOS:");

            for(int i=0;i<vet.Length;i++){
                
                if(vet[i] < 0){
                    Console.WriteLine(vet[i]);
                }

            }

        }

    }
    
}