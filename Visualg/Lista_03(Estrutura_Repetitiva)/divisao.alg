Algoritmo "divisao"

Var

   numCasos, i : inteiro
   denominador, numerador : real
   divisao : real
   
Inicio

      escreva("Quantos casos voce vai digitar? ")
      leia(numCasos)

      para i de 1 ate numCasos faca
           escreva("Entre com o numerador: ")
           leia(numerador)
           escreva("Entre com o denominador: ")
           leia(denominador)
           
           se denominador=0 entao
              escreval("DIVISAO IMPOSSIVEL")
           senao
                divisao <- numerador / denominador
                escreval("DIVISAO = ", divisao:3:2)
           fimse
      fimpara
           
      
Fimalgoritmo