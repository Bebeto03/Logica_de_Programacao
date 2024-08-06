using System;
using System.Globalization;

namespace Troco_Verificado{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Preco unitario do produto: ");
            double precoProduto = double.Parse(Console.ReadLine(),ci);

            Console.Write("Quantidade: ");
            int quantidade = int.Parse(Console.ReadLine());

            Console.Write("Dinheiro recebido: ");
            double dinheiroRecebido = double.Parse(Console.ReadLine(),ci);

            double valorAPagar = precoProduto * quantidade;

            if(dinheiroRecebido>=valorAPagar){
                double troco = dinheiroRecebido-valorAPagar;
                Console.Write("TROCO = " + troco.ToString("F2",ci));
            }
            else{
                double falta = valorAPagar-dinheiroRecebido;
                Console.Write("DINHEIRO INSUFICIENTE. FALTAM " + falta.ToString("F2",ci) + " REAIS");
            }
            
        }
    }
}