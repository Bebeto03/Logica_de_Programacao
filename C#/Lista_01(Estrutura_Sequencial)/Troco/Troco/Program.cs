using System;
using System.Globalization;

namespace Troco{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Preco unitario do produto: ");
            double precoUnitario = double.Parse(Console.ReadLine(),ci);

            Console.Write("Quantidade comprada: ");
            int quantidade = int.Parse(Console.ReadLine(),ci);

            Console.Write("Dinheiro recebido: ");
            double valorRecebido = double.Parse(Console.ReadLine(),ci);

            double troco = valorRecebido-precoUnitario*quantidade;

            Console.Write("TROCO = " + troco.ToString("F2",ci));

        }
    }
}