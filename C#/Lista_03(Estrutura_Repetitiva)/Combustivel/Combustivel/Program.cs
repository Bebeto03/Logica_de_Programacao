using System;
using System.Threading.Tasks.Dataflow;

namespace Combustivel{

    class Program{

        static void Main(string[] args){

            Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            int codigo = int.Parse(Console.ReadLine());

            int alcool=0, gasolina=0, diesel=0;

            while(codigo != 4){
                if(codigo == 1){
                    alcool++;
                }
                else if(codigo == 2){
                    gasolina++;
                }
                else if (codigo == 3){
                    diesel++;
                }
                Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
                codigo = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("MUITO OBRIGADO");

            Console.WriteLine("Alcool: " + alcool);
            Console.WriteLine("Gasolina: " + gasolina);
            Console.Write("Diesel: " + diesel);

        }
    }
}