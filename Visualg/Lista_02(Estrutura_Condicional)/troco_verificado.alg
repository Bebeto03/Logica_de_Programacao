Algoritmo "troco_verificado"

Var

   preUni : real
   quantProduto : inteiro
   dinheiroRecebido : real
   aPagar : real
   falta : real
   troco : real
   
Inicio

      escreva("Preço unitário do produto: ")
      leia(preUni)
      escreva("Quantidade comprada: ")
      leia(quantProduto)
      
      aPagar <- preUni * quantProduto
      
      escreva("Dinheiro recebido: ")
      leia(dinheiroRecebido)
      
      se dinheiroRecebido<aPagar entao
         falta <- aPagar - dinheiroRecebido
         escreva("DINHEIRO INSUFICIENTE. FALTAM ", falta:4:2, " REAIS")
      senao
           troco <- dinheiroRecebido - aPagar
           escreva("TROCO = ", troco:4:2)
      fimse
      
Fimalgoritmo