Algoritmo "combustivel"

Var

   codigo : caractere
   cont1, cont2, cont3 : inteiro
   
Inicio

      escreva("Informe um codigo (1, 2, 3) ou 4 para parar: ")
      leia(codigo)
      
      enquanto codigo<>"4" faca
               se codigo="1" entao
                  cont1 <- cont1 + 1
               fimse
               se codigo="2" entao
                  cont2 <- cont2 + 1
               fimse
               se codigo="3" entao
                  cont3 <- cont3 + 1
               fimse
               escreva("Informe o codigo (1, 2, 3) ou 4 para parar: ")
               leia(codigo)
      fimenquanto
      
      escreval("MUITO OBRIGADO")
      
      escreval("Alcool: ", cont1)
      escreval("Gasolina: ", cont2)
      escreva("Diesel: ", cont3)
      
Fimalgoritmo