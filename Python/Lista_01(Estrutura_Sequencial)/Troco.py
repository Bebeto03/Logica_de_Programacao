precoUnitarioProduto = float(input("Preco unitario do produto: "))

quantidadeComprada = int(input("Quantidade comprada: "))

dinheiroRecebido = float(input("Dinheiro recebido: "))

troco = dinheiroRecebido - (precoUnitarioProduto*quantidadeComprada)

print(f"TROCO = {troco:.2f}")