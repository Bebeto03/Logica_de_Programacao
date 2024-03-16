n = int(input("Serao digitados dados de quantos produtos? "))

nome = [0 for x in range(n)]
precoC = [0 for x in range(n)]
precoV = [0 for x in range(n)]

for i in range(0,n):
    print(f"Produto {i+1}:")
    nome[i] = input("Nome: ")
    precoC[i] = float(input("Preco de compra: "))
    precoV[i] = float(input("Preco de venda: "))

cont1 = 0
cont2 = 0
cont3 = 0

for i in range(0,n):
    if precoV[i]<precoC[i]*1.10:
        cont1+=1
    elif precoV[i]<=precoC[i]*1.20:
        cont2+=1
    else:
        cont3+=1

totC = 0.00
totV = 0.00

for i in range(0,n):
    totC+=precoC[i]
    totV+=precoV[i]

lucro = totV - totC

print("\nRELATORIO")
print(f"Lucro abaixo de 10%: {cont1}")
print(f"Lucro entre 10% e 20%: {cont2}")
print(f"Lucro acima de 20%: {cont3}")
print(f"Valor total de compra: {totC:.2f}")
print(f"Valor total de venda: {totV:.2f}")
print(f"Lucro: {lucro:.2f}")