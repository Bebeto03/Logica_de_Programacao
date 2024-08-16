using System;

namespace Senha_Fixa{

    class Program{

        static void Main(string[] args){

            Console.Write("Digite a senha: ");
            string senha = Console.ReadLine();

            while(senha != "2002"){
                Console.Write("Senha invalida! Tente novamente: ");
                senha = Console.ReadLine();
            }

            Console.Write("Acesso permitido.");

        }

    }
    
}