using System;

namespace Menor_De_Tres{

    class Program{

        static void Main(string[] args){

            Console.Write("Primeiro valor: ");
            int v1 = int.Parse(Console.ReadLine());

            Console.Write("Segundo valor: ");
            int v2 = int.Parse(Console.ReadLine());

            Console.Write("Terceiro valor: ");
            int v3 = int.Parse(Console.ReadLine());

            int menor;

            if(v1<=v2 && v1<=v3){
                menor = v1;
            }
            else if(v2<=v1 && v2<=v3){
                menor = v2;
            }
            else{
                menor = v3;
            }

            Console.Write("MENOR = " + menor.ToString());

        }

    }
    
}