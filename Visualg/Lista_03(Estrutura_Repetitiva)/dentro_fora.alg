Algoritmo "dentro_fora"

Var

   n : inteiro
   i : inteiro
   x : inteiro
   dentro : inteiro
   fora : inteiro
   
Inicio

      escreva("Quantos numeros voce vai digitar? ")
      leia(n)
      
      para i de 1 ate n faca
           escreva("Digite um numero: ")
           leia(x)
           
           se (x>=10) e (x<=20) entao
              dentro <- dentro + 1
           senao
                fora <- fora + 1
           fimse
      fimpara
      
      escreval(dentro, " DENTRO")
      escreva(fora, " FORA")
      
Fimalgoritmo