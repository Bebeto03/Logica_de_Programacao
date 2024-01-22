Algoritmo "media_pares"

Var

   n, i : inteiro
   vet : vetor[0..9] de inteiro
   soma : inteiro
   cont : inteiro
   media : real
   
Inicio

      escreva("Quatos elementos vai ter o vetor? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
      fimpara
      
      para i de 0 ate n-1 faca
           se vet[i]%2=0 entao
              soma <- soma + vet[i]
              cont <- cont + 1
           fimse
      fimpara
      
      se soma=0 entao
         escreva("NENHUM NUMERO PAR")
      senao
           media <- soma/cont
           escreva("MEDIA DOS PARES = ", media:3:1)
      fimse
      
Fimalgoritmo