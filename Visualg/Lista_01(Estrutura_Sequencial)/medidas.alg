Algoritmo "medidas"

Var

   medidaA, medidaB, medidaC : real
   areaQuadrado : real
   areaTriangulo : real
   areaTrapezio : real

Inicio

      escreva("Digite a medida A: ")
      leia(medidaA)
      
      escreva("Digite a medida B: ")
      leia(medidaB)
      
      escreva("Digite a medida C: ")
      leia(medidaC)
      
      areaQuadrado <- medidaA^2
      
      areaTriangulo <- (medidaA*medidaB)/2
      
      areaTrapezio <- ((medidaA+medidaB)*medidaC)/2
      
      escreval("AREA DO QUADRADO = ", areaQuadrado:6:4)
      
      escreval("AREA DO TRIANGULO = ", areaTriangulo:6:4)
      
      escreva("AREA DO TRAPEZIO = ", areaTrapezio:6:4)
      
Fimalgoritmo