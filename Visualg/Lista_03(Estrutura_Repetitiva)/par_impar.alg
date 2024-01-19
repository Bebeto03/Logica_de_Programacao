Algoritmo "par_impar"

Var

   n : inteiro
   i : inteiro
   x : inteiro
   
Inicio

      escreva("Quantos numeros voce vai digitar? ")
      leia(n)
      
      para i de 1 ate n faca
           escreva("Digite um numero: ")
           leia(x)
           
           se (x>0) e (x%2=0) entao
              escreval("PAR POSITIVO")
           senao
                se (x>0) e (x%2<>0) entao
                   escreval("IMPAR POSITIVO")
                senao
                     se (x<0) e (x%2=0) entao
                        escreval("PAR NEGATIVO")
                     senao
                          se (x<0) e (x%2<>0) entao
                             escreval("IMPAR NEGATIVO")
                          senao
                               escreval("NULO")
                          fimse
                     fimse
                fimse
           fimse
      fimpara
      
Fimalgoritmo