minutos = int(input("Digite a quantidade de minutos: "))

if minutos<=100:
    aPagar = 50.00
else:
    aPagar = 50.00 + 2.00*(minutos-100)

print(f"Valor a pagar: R$ {aPagar:.2f}")