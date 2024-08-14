using System;
using System.Globalization;

namespace Aumento{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite o salario da pessoa: ");
            double salario = double.Parse(Console.ReadLine(),ci);

            double novoSalario, aumento;
            int per;

            if(salario <= 1000.00){
                novoSalario = salario * 1.20;
                aumento = novoSalario - salario;
                per = 20;
            }
            else if(salario <= 3000.00){
                novoSalario = salario * 1.15;
                aumento = novoSalario - salario;
                per = 15;
            }
            else if(salario <= 8000.00){
                novoSalario = salario * 1.10;
                aumento = novoSalario - salario;
                per = 10;
            }
            else{
                novoSalario = salario * 1.05;
                aumento = novoSalario - salario;
                per = 5;
            }

            Console.WriteLine("Novo salario = R$ " + novoSalario.ToString("F2",ci));
            Console.WriteLine("Aumento = R$ " + aumento.ToString("F2",ci));
            Console.WriteLine("Porcentagem = " + per + "%");

        }
    }
}