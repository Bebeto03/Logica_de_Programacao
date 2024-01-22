Algoritmo "mais_velho"

Var
   
   n, i : inteiro
   nomes : vetor[0..9] de caractere
   idades : vetor[0..9] de inteiro
   nome : caractere
   maior : inteiro
   
Inicio

      escreva("Quantas pessoas voce vai digitar? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreval("Dados da ", i+1, "a pessoa: ")
           escreva("Nome: ")
           leia(nomes[i])
           escreva("Idade: ")
           leia(idades[i])
      fimpara
      
      maior <- idades[0]
      
      para i de 0 ate n-1 faca
           se idades[i]>=maior entao
              maior <- idades[i]
              nome <- nomes[i]
           fimse
      fimpara
      
      escreva("PESSOA MAIS VELHA: ", nome)
      
Fimalgoritmo