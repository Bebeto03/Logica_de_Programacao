Algoritmo "media_idades"

Var

   x, cont : inteiro
   soma, media : real
   
Inicio

      escreval("Digite as idades: ")
      leia(x)
      
      se x<0 entao
         escreva("IMPOSSIVEL CALCULAR!")
         Fimalgoritmo
      fimse
      
      enquanto x>=0 faca
               cont <- cont + 1
               soma <- soma + x
               leia(x)
      fimenquanto
      
      media <- soma / cont
      
      escreva("MEDIA = ", media:4:2)
      
Fimalgoritmo