cod = (input("Codigo do produto comprado: "))

if cod == '1':
    preco = 5.00
elif cod == '2':
    preco = 3.50
elif cod == '3':
    preco = 4.80
elif cod == '4':
    preco = 8.90
elif cod == '5':
    preco = 7.32
else:
    preco = 0.00

quant = int(input("Quantidade comprada: "))

aPagar = preco * quant

print(f"Valor a pagar: R$ {aPagar:.2f}")