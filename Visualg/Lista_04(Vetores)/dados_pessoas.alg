Algoritmo "dados_pessoas"

Var

   n, i : inteiro
   menor, maior : real
   alturas : vetor[0..9] de real
   generos : vetor[0..9] de caractere
   soma, media : real
   cont, cont1 : inteiro
   
Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreva("Altura da ", i+1, "a pessoa: ")
           leia(alturas[i])
           escreva("Genero da ", i+1, "a pessoa: ")
           leia(generos[i])
      fimpara
      
      maior <- alturas[0]
      menor <- alturas[0]
      
      para i de 0 ate n-1 faca
           se alturas[i]>maior entao
              maior <- alturas[i]
           fimse
           se alturas[i]<menor entao
              menor <- alturas[i]
           fimse
      fimpara
      
      para i de 0 ate n-1 faca
           se generos[i]="F" entao
              soma <- soma + alturas[i]
              cont <- cont + 1
           fimse
           se generos[i]="M" entao
              cont1 <- cont1 + 1
           fimse
      fimpara
      
      media <- soma/cont
      
      escreval("Menor altura = ", menor:4:2)
      escreval("Maior altura = ", maior:4:2)
      escreval("Media das alturas das mulheres = ", media:4:2)
      escreva("Numero de homens = ", cont1)
      
Fimalgoritmo