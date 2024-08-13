using System;
using System.Globalization;

namespace Lanchonete{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Código do produto comprado: ");
            int codigo = int.Parse(Console.ReadLine());

            Console.Write("Quantidade comprada: ");
            int quant = int.Parse(Console.ReadLine());

            double valorAPagar;

            switch (codigo){
                case 1:
                    valorAPagar = 5.00 * quant;
                    break;
                case 2:
                    valorAPagar = 3.50 * quant;
                    break;
                case 3:
                    valorAPagar = 4.80 * quant;
                    break;
                case 4:
                    valorAPagar = 8.90 * quant;
                    break;
                case 5:
                    valorAPagar = 7.32 * quant;
                    break;
                default:
                    valorAPagar = 0.00;
                    break;
            }

            Console.Write("Valor a pagar: R$ " + valorAPagar.ToString("F2",ci));

        }

    }
    
}