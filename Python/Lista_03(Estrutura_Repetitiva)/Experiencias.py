n = int(input("Quantos casos de teste serao digitados? "))

coelhos = 0
ratos = 0
sapos = 0
total = 0

for i in range(0,n):
    cobaias = int(input("Quantidade de cobaias: "))
    tipo = input("Tipo de cobaia: ")
    if tipo=='C':
        coelhos+=cobaias
    elif tipo=='R':
        ratos+=cobaias
    elif tipo=='S':
        sapos+=cobaias
    total+=cobaias

print("\nRELATORIO FINAL:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")

perC = coelhos/total*100
perR = ratos/total*100
perS = sapos/total*100

print(f"Percentual de coelhos: {perC:.2f}")
print(f"Percentual de ratos: {perR:.2f}")
print(f"Percentual de sapos: {perS:.2f}")