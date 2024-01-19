Algoritmo "soma_impares"

Var

   i : inteiro
   n1, n2, n3 : inteiro
   soma : inteiro
   
Inicio

      escreval("Digite dois numeros: ")
      leia(n1)
      leia(n2)
      
      se n2 < n1 entao
         n3 <- n1
         n1 <- n2
         n2 <- n3
      fimse
      
      para i de (n1+1) ate (n2-1) faca
           se i%2<>0 entao
              soma <- soma + i
           fimse
      fimpara
      
      escreva("SOMA DOS IMPARES = ", soma)

      
Fimalgoritmo