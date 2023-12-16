Algoritmo "retangulo"

Var

   baseRetangulo : real
   alturaRetangulo : real
   areaRetangulo : real
   perimetroRetangulo : real
   diagonalRetangulo : real
   
Inicio

      escreva("Base do retangulo: ")
      leia(baseRetangulo)
      escreva("Altura do retangulo: ")
      leia(alturaRetangulo)
      
      escreval
      
      areaRetangulo <- (baseRetangulo * alturaRetangulo)
      perimetroRetangulo <- ((2*baseRetangulo)+(2*alturaRetangulo))
      diagonalRetangulo <- RaizQ(baseRetangulo^2 + alturaRetangulo^2)
      
      escreval("AREA = ", areaRetangulo:1:4)
      escreval("PERIMETRO = ", perimetroRetangulo:1:4)
      escreva("DIAGONAL = ", diagonalRetangulo:1:4)
      
Fimalgoritmo