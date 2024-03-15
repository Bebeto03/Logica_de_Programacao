n = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(n)]

for i in range(0,n):
    vet[i] = int(input("Digite um numero: "))

print("\nNUMEROS PARES:")

for i in range(0,n):
    if vet[i]%2==0:
        print(vet[i], end="  ")

cont = 0

for i in range(0,n):
    if vet[i]%2==0:
        cont+=1

print(f"\n\nQUANTIDADE DE PARES = {cont}")