Algoritmo "media_ponderada"

Var

   n : inteiro
   i : inteiro
   x, y, z : real
   media : real
   
Inicio

      escreva("Quantos casos voce vai digitar? ")
      leia(n)
      
      para i de 1 ate n faca
           escreval("Digite tres numeros: ")
           leia(x)
           leia(y)
           leia(z)
           
           media <- ((2*x)+(3*y)+(5*z))/10
           
           escreval("MEDIA = ", media:3:1)
      fimpara
      
Fimalgoritmo