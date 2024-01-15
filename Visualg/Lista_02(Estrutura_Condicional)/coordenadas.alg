Algoritmo "coordenadas"

Var

   x, y : real
   posicao : caractere

Inicio

      escreva("VALOR DE X: ")
      leia(X)
      escreva("VALOR DE Y: ")
      leia(Y)
      
      se (x>0) e (y>0) entao
         escreva("Q1")
      senao
           se (x<0) e (y>0) entao
              escreva("Q2")
           senao
                se (x<0) e (y<0) entao
                   escreva("Q3")
                senao
                     se (x>0) e (y<0) entao
                        escreva("Q4")
                     senao
                          se (x<>0) e (y=0) entao
                             escreva("EIXO X")
                          senao
                               se (x=0) e (y<>0) entao
                                  escreva("EIXO Y")
                               senao
                                    escreva("ORIGEM")
                               fimse
                          fimse
                     fimse
                fimse
           fimse
      fimse

Fimalgoritmo