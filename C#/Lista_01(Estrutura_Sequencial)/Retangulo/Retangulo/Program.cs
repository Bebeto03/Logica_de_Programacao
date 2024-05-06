using System;
using System.Globalization;

namespace Retangulo{

    class Program{

        static void Main(string[] args){

            CultureInfo ci = CultureInfo.InvariantCulture;

            Console.Write("Base do retangulo: ");
            double baseRetangulo = double.Parse(Console.ReadLine(), ci);

            Console.Write("Altura do retangulo: ");
            double alturaRetangulo = double.Parse(Console.ReadLine(), ci);

            double area = baseRetangulo * alturaRetangulo;

            double perimetro = 2*baseRetangulo+2*alturaRetangulo;

            double diagonal = Math.Sqrt(Math.Pow(baseRetangulo,2)+Math.Pow(alturaRetangulo,2));

            Console.WriteLine("AREA = " + area.ToString("F4", ci));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", ci));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", ci));

        }

    }

}