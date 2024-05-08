using System;
using System.Globalization;

namespace Pagamento{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Nome: ");
            string nome = Console.ReadLine();

            Console.Write("Valor por hora: ");
            double valorPorHora = double.Parse(Console.ReadLine(), ci);

            Console.Write("Horas trabalhadas: ");
            int horasTrabalhadas = int.Parse(Console.ReadLine());

            double pagamento = valorPorHora * horasTrabalhadas;

            Console.Write("O pagamento para " + nome + " deve ser " + pagamento.ToString("F2",ci));

        }

    }

}