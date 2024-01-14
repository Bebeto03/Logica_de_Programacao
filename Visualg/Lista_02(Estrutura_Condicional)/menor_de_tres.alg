Algoritmo "menor_de_tres"


Var

   num1, num2, num3 : inteiro

Inicio

      escreva("Primeiro valor: ")
      leia(num1)
      escreva("Segundo valor: ")
      leia(num2)
      escreva("Terceiro valor: ")
      leia(num3)
      
      se (num1<=num2) e (num1<=num3) entao
         escreva("MENOR = ", num1)
      senao
           se (num2<=num1) e (num2<=num3) entao
              escreva("MENOR = ", num2)
           senao
                escreva("MENOR = ", num3)
           fimse
      fimse
      
Fimalgoritmo