preco = float(input("Preco unitario do produto: "))

quantidade = int(input("Quantidade comprada: "))

aPagar = preco*quantidade

recebido = float(input("Dinheiro recebido: "))

if recebido>=aPagar:
    troco = recebido - aPagar
    print(f"TROCO = {troco:.2f}")
else:
    faltando = aPagar - recebido
    print(f"DINHEIRO INSUFICIENTE. FALTAM {faltando:.2f} REAIS")