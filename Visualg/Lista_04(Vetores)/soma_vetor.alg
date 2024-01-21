Algoritmo "soma_vetor"

Var

   n : inteiro
   vet: vetor [0..9] de real
   soma : real
   media : real
   i : inteiro
   
Inicio

      escreva("Quantos numeros voce vai digitar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
      fimpara
      
      escreval
      escreva("VALORES = ")
      
      para i de 0 ate n-1 faca
           escreva(" ", vet[i]:3:1, " ")
           soma <- soma + vet[i]
      fimpara
      
      escreval
      escreval("SOMA = ", soma:4:2)
      escreva("MEDIA = ", (soma/n):4:2)


Fimalgoritmo