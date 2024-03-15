n = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(n)]

for i in range(0,n):
    vet[i] = float(input("Digite um numero: "))

maior = vet[0]
pos = 0

for i in range(0,n):
    if vet[i]>maior:
        maior = vet[i]
        pos = i

print(f"\nMAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {pos}")