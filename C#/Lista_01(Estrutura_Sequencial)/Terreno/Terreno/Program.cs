using System;
using System.Globalization;

namespace Terreno{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Digite a largura do terreno: ");
            double largura = double.Parse(Console.ReadLine(), ci);

            Console.Write("Digite o comprimento do terreno: ");
            double comprimento = double.Parse(Console.ReadLine(), ci);

            Console.Write("Digite o valor do metro quadrado: ");
            double valorMetroQuadrado = double.Parse(Console.ReadLine(), ci);

            double area = largura * comprimento;
            double precoTerreno = area * valorMetroQuadrado;

            Console.WriteLine("Area do terreno = " + area.ToString("F2", ci));
            Console.WriteLine("Preco do terreno = " + precoTerreno.ToString("F2", ci));

        }

    }

}