Algoritmo "pares_consecutivos"

Var

   numero : inteiro
   soma : inteiro
   
Inicio

      escreva("Digite um numero inteiro: ")
      leia(numero)
      
      enquanto numero<>0 faca
               se numero%2=0 entao
                  soma <- 5*numero + 20
               senao
                    soma <- 5*numero + 25
               fimse
               escreval("SOMA = ", soma)
               escreva("Digite um numero inteiro: ")
               leia(numero)
      fimenquanto
      
Fimalgoritmo