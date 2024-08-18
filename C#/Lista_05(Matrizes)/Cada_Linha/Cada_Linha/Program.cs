using System;

namespace Cada_Linha{

    class Program{

        static void Main(string[] args){

            Console.Write("Qual a ordem da matriz? ");
            int n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];
            int[] maior = new int[n];

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());

                }

            }

            for(int i=0;i<n;i++){

                maior[i] = mat[i, 0];

            }

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    if(maior[i]<mat[i,j]){
                        maior[i] = mat[i,j];
                    }

                }

            }

            Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");
            
            for(int i=0;i<n;i++){

                Console.WriteLine(maior[i]);

            }

        }

    }
    
}