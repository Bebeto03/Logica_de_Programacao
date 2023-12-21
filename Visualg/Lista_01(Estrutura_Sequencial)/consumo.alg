Algoritmo "consumo"

Var

   distanciaPercorrida : real
   combustivelGasto : real
   consumoMedio : real

Inicio

      escreva("Distancia percorrida: ")
      leia(distanciaPercorrida)
      
      escreva("Combustivel gasto: ")
      leia(combustivelGasto)
      
      consumoMedio <- distanciaPercorrida / combustivelGasto
      
      escreva("Consumo medio: ", consumoMedio:5:3)
      
Fimalgoritmo