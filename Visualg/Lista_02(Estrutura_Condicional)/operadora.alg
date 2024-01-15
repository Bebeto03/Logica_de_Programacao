Algoritmo "operadora"

Var

   minutos : inteiro
   valor : real
   
Inicio

      escreva("Digite a quantidade de minutos: ")
      leia(minutos)
      
      se minutos<=100 entao
         escreva("Valor a pagar: R$ 50.00")
      senao
           valor <- 50 + (minutos - 100) * 2
           escreva("Valor a pagar: R$ ", valor:5:2)
      fimse
      
Fimalgoritmo