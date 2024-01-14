Algoritmo "baskara"


Var

   a, b, c : real
   delta : real
   x1, x2 : real

Inicio

      escreva("Coeficiente A: ")
      leia(a)
      escreva("Coeficiente B: ")
      leia(b)
      escreva("Coeficiente C: ")
      leia(c)
      
      delta <- b^2-(4*a*c)
      
      se delta < 0 entao
         escreva("Esta equação não possui raízes reais.")
         Fimalgoritmo
      fimse
      
      x1 <- (-b + RaizQ(delta)) / (2*a)
      x2 <- (-b - RaizQ(delta)) / (2*a)
      
      se delta = 0 entao
         escreva("X = ", x1:6:4)
      senao
           escreval("X1 = ", x1:6:4)
           escreva("X2 = ", x2:6:4)
      fimse


Fimalgoritmo