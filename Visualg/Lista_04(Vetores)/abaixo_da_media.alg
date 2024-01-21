Algoritmo "abaixo_da_media"

Var

   n, i : inteiro
   vet : vetor[0..9] de real
   somaVet, mediaVet : real
   
Inicio

      escreva("Quantos elementos vai ter o vetor? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
      fimpara
      
      para i de 0 ate n-1 faca
           somaVet <- somaVet + vet[i]
      fimpara
      
      mediaVet <- somaVet/n
      
      escreval
      escreval("MEDIA DO VETOR = ", mediaVet:5:3)

      escreval("ELEMENTOS ABAIXO DA MEDIA: ")
      
      para i de 0 ate n-1 faca
           se vet[i] < mediaVet entao
              escreval(vet[i]:4:1)
           fimse
      fimpara

Fimalgoritmo