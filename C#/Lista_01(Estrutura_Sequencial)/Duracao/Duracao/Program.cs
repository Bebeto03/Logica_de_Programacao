﻿using System;

namespace Duracao{

    class Program{

        static void Main(string[] args){

            Console.Write("Digite a duracao em segundos: ");
            int duracao = int.Parse(Console.ReadLine());

            int horas = duracao/3600;
            int minutos = duracao%3600/60;
            int segundos = duracao%3600%60;

            Console.Write(horas + ":" + minutos + ":" + segundos);

        }

    }
    
}