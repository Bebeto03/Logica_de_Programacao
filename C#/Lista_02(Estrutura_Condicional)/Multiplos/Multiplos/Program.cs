using System;
using System.Globalization;

namespace Multiplos{

    class Program{

        static void Main(string[] args){

            Console.WriteLine("Digite dois numeros inteiros: ");
            int n1 = int.Parse(Console.ReadLine());
            int n2 = int.Parse(Console.ReadLine());

            int n3;

            if(n1 < n2){
                n3 = n1;
                n1 = n2;
                n2 = n3;
            }

            if(n1%n2 == 0){
                Console.WriteLine("Sao multiplos");
            }
            else{
                Console.WriteLine("Nao sao multiplos");
            }

        }
    }
}