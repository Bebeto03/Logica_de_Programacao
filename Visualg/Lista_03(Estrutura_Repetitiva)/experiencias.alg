Algoritmo "experiencias"

Var

   i : inteiro
   testes, cobaias : inteiro
   type : caractere
   sapo, rato, coelho, total : inteiro
   
Inicio

      escreva("Quantos casos de teste serao digitados? ")
      leia(testes)
      
      para i de 1 ate testes faca
           escreva("Quantidade de cobaias: ")
           leia(cobaias)
           escreva("Tipo de cobaia: ")
           leia(type)
           
           total <- total + cobaias
           
           se type = "C" entao
              coelho <- coelho + cobaias
           fimse
           se type = "S" entao
              sapo <- sapo + cobaias
           fimse
           se type = "R" entao
              rato <- rato + cobaias
           fimse
      fimpara
      
      escreval
      
      escreval("RELATORIO FINAL")
      
      escreval("Total: ", total)
      escreval("Total de coelhos: ", coelho)
      escreval("Total de ratos: ", rato)
      escreval("Total de sapos: ", sapo)
      escreval("Percentual de coelhos: ", (coelho*100/total):4:2)
      escreval("Percentual de ratos: ", (rato*100/total):4:2)
      escreva("Percentual de sapos: ", (sapo*100/total):4:2)

Fimalgoritmo