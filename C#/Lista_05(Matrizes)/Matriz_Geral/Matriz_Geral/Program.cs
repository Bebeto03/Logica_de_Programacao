using System;
using System.Globalization;

namespace Matriz_Geral{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Qual a ordem da matriz? ");
            int n = int.Parse(Console.ReadLine());

            double[,] mat = new double[n,n];

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i,j] = double.Parse(Console.ReadLine(),ci);

                }

            }

            double soma = 0.0;

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    if(mat[i,j] > 0){
                        soma += mat[i,j];
                    }

                }

            }

            Console.WriteLine("\nSOMA DOS POSITIVOS: " + soma.ToString("F1",ci));

            Console.Write("\nEscolha uma linha: ");
            int linha = int.Parse(Console.ReadLine());

            Console.Write("LINHA ESCOLHIDA: ");
            
            for(int j=0;j<n;j++){
                
                Console.Write(mat[linha,j].ToString("F1",ci) + "  ");

            }

            Console.Write("\n\nEscolha uma coluna: ");
            int coluna = int.Parse(Console.ReadLine());

            Console.Write("COLUNA ESCOLHIDA: ");

            for(int i=0;i<n;i++){

                Console.Write(mat[i,coluna].ToString("F1",ci) + "  ");

            }

            Console.Write("\n\nDIAGONAL PRINCIPAL: ");

            for(int i=0;i<n;i++){

                Console.Write(mat[i,i].ToString("F1",ci) + "  ");
            }

            Console.WriteLine("\n\nMATRIZ ALTERADA:");

            for(int i=0;i<n;i++){

                for(int j=0;j<n;j++){

                    if(mat[i,j]<0.0){
                        mat[i,j] = mat[i,j]*mat[i,j];
                    }

                    Console.Write(mat[i,j].ToString("F1",ci) + "  ");

                }

                Console.WriteLine();

            }

        }

    }
    
}