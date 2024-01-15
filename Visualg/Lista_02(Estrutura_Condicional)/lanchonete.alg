Algoritmo "lanchonete"

Var

   codigoProduto : inteiro
   quantidadeProduto : inteiro
   valorPagar: real

Inicio

      escreva("Código do produto comprado: ")
      leia(codigoProduto)
      escreva("Quantidade comprada: ")
      leia(quantidadeProduto)
      
      escolha codigoProduto
      caso 1
           valorPagar <- quantidadeProduto * 5.00
      caso 2
           valorPagar <- quantidadeProduto * 3.50
      caso 3
           valorPagar <- quantidadeProduto * 4.80
      caso 4
           valorPagar <- quantidadeProduto * 8.90
      caso 5
           valorPagar <- quantidadeProduto * 7.32
      outrocaso
               escreva("Código inválido.")
               Fimalgoritmo
      fimescolha
      
      escreva("Valor a pagar: R$ ", valorPagar:4:2)

Fimalgoritmo