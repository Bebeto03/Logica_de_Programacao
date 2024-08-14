using System;
using System.Globalization;

namespace Tempo_De_Jogo{

    class Program{

        static void Main(string[] args){

            Console.Write("Hora inicial: ");
            int horaI = int.Parse(Console.ReadLine());

            Console.Write("Hora final: ");
            int horaF = int.Parse(Console.ReadLine());

            if(horaF <= horaI){
                horaF = horaF + 24;
            }

            int duracao = horaF - horaI;

            Console.Write("O JOGO DUROU " + duracao + " HORA(S)");

        }

    }
    
}