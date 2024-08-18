using System;
using System.Globalization;

namespace Comerciante{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Serao digitados dados de quantos produtos? ");
            int n = int.Parse(Console.ReadLine());

            string[] nome = new string[n];
            double[] precoCompra = new double[n];
            double[] precoVenda = new double[n];

            for(int i=0;i<nome.Length;i++){

                Console.WriteLine("Produto " + (i+1) + ":");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("Preco de compra: ");
                precoCompra[i] = double.Parse(Console.ReadLine(),ci);
                Console.Write("Preco de venda: ");
                precoVenda[i] = double.Parse(Console.ReadLine(),ci);

            }

            int cont1=0, cont2=0, cont3=0;

            for(int i=0;i<nome.Length;i++){

                if((precoVenda[i]-precoCompra[i]) < (precoCompra[i]*0.10)){
                    cont1++;
                }
                else if((precoVenda[i]-precoCompra[i]) <= (precoCompra[i]*0.20)){
                    cont2++;
                }
                else{
                    cont3++;
                }
            }

            double totalC = 0.00, totalV = 0.00;

            for(int i=0;i<nome.Length;i++){

                totalC += precoCompra[i];
                totalV += precoVenda[i];

            }

            double lucro = totalV-totalC;

            Console.WriteLine("\nRELATORIO:");
            Console.WriteLine("Lucro abaixo de 10%: " + cont1);
            Console.WriteLine("Lucro entre 10% e 20%: " + cont2);
            Console.WriteLine("Lucro acima de 20%: " + cont3);
            Console.WriteLine("Valor total de compra: " + totalC.ToString("F2",ci));
            Console.WriteLine("Valor total de venda: " + totalV.ToString("F2",ci));
            Console.Write("Lucro total: " + lucro.ToString("F2",ci));

        }

    }
    
}