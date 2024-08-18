using System;

namespace Acima_Diagonal{

    class Program{

        static void Main(string[] args){

            Console.Write("Qual a ordem da matriz? ");
            int n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n,n];

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i,j] = int.Parse(Console.ReadLine());

                }

            }

            int soma = 0;

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    if(j>i){
                        soma += mat[i,j];
                    }

                }

            }

            Console.Write("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);

        }

    }

}