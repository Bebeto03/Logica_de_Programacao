Algoritmo "temperatura"

Var

   escala : caractere
   temperatura : real
   conversao : real
   
Inicio

      escreva("Você vai digitar a temperatura em qual escala (C/F)? ")
      leia(escala)
      
      se escala = "C" entao
         escreva("Digite a temperatura em Celsius: ")
         leia(temperatura)
         conversao <- (9/5*temperatura)+32
         escreva("Temperatura equivalente em Farenheit: ", conversao:4:2)
      senao
           se escala = "F" entao
              escreva("Digite a temperatura em Fahrenheit: ")
              leia(temperatura)
              conversao <- 5/9*(temperatura-32)
              escreva("Temperatura equivalente em Celsius: ", conversao:4:2)
           fimse
      fimse

Fimalgoritmo