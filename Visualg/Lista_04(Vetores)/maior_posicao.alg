Algoritmo "maior_posicao"

Var

   n, i : inteiro
   vet : vetor[0..9] de real
   maior : real
   posicao : inteiro
   
Inicio

      escreva("Quantos numeros voce vai digitar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
      fimpara
      
      maior <- vet[0]
      
      para i de 0 ate n-1 faca
           se vet[i] > maior entao
              maior <- vet[i]
              posicao <- i
           fimse
      fimpara
      
      escreval
      escreval("MAIOR VALOR = ", maior)
      escreva("POSICAO DO MAIOR VALOR = ", posicao)
      
Fimalgoritmo