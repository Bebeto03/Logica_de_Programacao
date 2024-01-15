Algoritmo "multiplos"

Var

   num1, num2 : inteiro

Inicio

      escreval("Digite dois números inteiros:")
      leia(num1)
      leia(num2)
      
      se (num1%num2=0) ou (num2%num1=0) entao
         escreva("Sao multiplos")
      senao
           escreva("Nao sao multiplos")
      fimse

Fimalgoritmo