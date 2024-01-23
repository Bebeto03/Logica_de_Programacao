Algoritmo "comerciante"

Var

   n, i : inteiro
   nomes : vetor[0..9] de caractere
   precoCompra, precoVenda : vetor[0..9] de real
   cont1, cont2, cont3 : inteiro
   somaCompra, somaVenda : real
   lucro : real
   
Inicio

      escreva("Serao digitados dados de quantos produtos: ")
      leia(n)
      
      para i de 0 ate n-1 faca
           escreval("Produto ", i+1, ": ")
           escreva("Nome: ")
           leia(nomes[i])
           escreva("Preco de compra: ")
           leia(precoCompra[i])
           escreva("Preco de venda: ")
           leia(precoVenda[i])
      fimpara
      
      para i de 0 ate n-1 faca
           se (precoVenda[i]-precoCompra[i])<(precoCompra[i]/10) entao
              cont1 <- cont1 + 1
           senao
                se (precoVenda[i]-precoCompra[i])<=(precoCompra[i]/5) entao
                   cont2 <- cont2 + 1
                senao
                     cont3 <- cont3 + 1
                fimse
           fimse
      fimpara
      
      para i de 0 ate n-1 faca
           somaCompra <- somaCompra + precoCompra[i]
           somaVenda <- somaVenda + precoVenda[i]
      fimpara
      
      lucro <- somaVenda - somaCompra
      
      escreval
      escreval("RELATORIO:")
      escreval("Lucro abaixo de 10%: ", cont1)
      escreval("Lucro entre 10% e 20%: ", cont2)
      escreval("Lucro acima de 20%: ", cont3)
      escreval("Valor total de compra: ", somaCompra:4:2)
      escreval("Valor total de venda: ", somaVenda:4:2)
      escreva("Lucro total: ", lucro:4:2)
      
Fimalgoritmo