using System;

namespace Soma_Impares{

    class Program{

        static void Main(string[] args){

            Console.WriteLine("Digite dois numeros:");
            int x = int.Parse(Console.ReadLine());
            int y = int.Parse(Console.ReadLine());

            if(x > y){
                int z = x;
                x = y;
                y = z;
            }

            int soma = 0;

            for(int i=x+1; i<y; i++){
                if(i % 2 != 0){
                    soma += i;
                }
            }

            Console.WriteLine("SOMA DOS IMPARES = " + soma);
        }
    }
}