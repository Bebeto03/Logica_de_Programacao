Algoritmo "alturas"

Var

   n, i : inteiro
   vetNome : vetor[0..9] de caractere
   vetIdade : vetor[0..9] de inteiro
   vetAltura : vetor[0..9] de real
   somaAltura : real
   media : real
   cont : inteiro
   
Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreval("Dados da ", i+1, "a pessoa:")
           escreva("Nome: ")
           leia(vetNome[i])
           escreva("Idade: ")
           leia(vetIdade[i])
           escreva("Altura: ")
           leia(vetAltura[i])
      fimpara
      
      para i de 0 ate n-1 faca
           somaAltura <- somaAltura + vetAltura[i]
           se vetIdade[i]<16 entao
              cont <- cont + 1
           fimse
      fimpara
      
      escreval
      escreval("Altura media: ", (somaAltura/n):4:2)
      escreval("Pessoas com menos de 16 anos: ", (cont*100/n):3:1, "%")
      
      para i de 0 ate n-1 faca
           se vetIdade[i]<16 entao
              escreval(vetNome[i])
           fimse
      fimpara
      
Fimalgoritmo