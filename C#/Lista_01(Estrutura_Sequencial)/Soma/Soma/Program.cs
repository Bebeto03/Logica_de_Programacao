using System;

namespace Soma{

    class Program{

        static void Main(string[] args){

            Console.Write("Digite o valor de X: ");
            int x = int.Parse(Console.ReadLine());

            Console.Write("Digite o valor de Y: ");
            int y = int.Parse(Console.ReadLine());

            int soma = x+y;

            Console.Write("SOMA = " + soma);

        }

    }
    
}