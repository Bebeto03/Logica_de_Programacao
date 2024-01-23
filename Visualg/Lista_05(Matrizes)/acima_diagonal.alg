Algoritmo "acima_diagonal"

Var

   n, i, j : inteiro
   soma : inteiro
   mat : vetor[0..9,0..9] de inteiro

Inicio

      escreva("Qual a ordem da matriz? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                escreva("Elemeto[", i, ",", j, "]: ")
                leia(mat[i,j])
           fimpara
      fimpara
      
      para i de 0 ate n-1 faca
           para j de 0 ate n-1 faca
                se j>i entao
                   soma <- soma + mat[i,j]
                fimse
           fimpara
      fimpara
      
      escreva("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL: ", soma)

Fimalgoritmo