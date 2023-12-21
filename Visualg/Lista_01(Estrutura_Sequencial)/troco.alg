Algoritmo "troco"

Var

   precoUnitarioProduto : real
   quantidadeCompradaProduto : inteiro
   total : real
   dinheiroRecebido : real
   troco : real

Inicio

      escreva("Preço unitário do produto: ")
      leia(precoUnitarioProduto)
      
      escreva("Quantidade comprada: ")
      leia(quantidadeCompradaProduto)
      
      total <- precoUnitarioProduto * quantidadeCompradaProduto
      
      escreva("Dinheiro recebido: ")
      leia(dinheiroRecebido)
      
      troco <- dinheiroRecebido - total
      
      escreva("TROCO = ", troco:3:2)

Fimalgoritmo