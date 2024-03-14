n = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(n)]

soma = 0.0

for i in range(0,n):
    vet[i] = float(input("Digite um numero: "))
    soma += vet[i]

media = soma/n

print("\nVALORES = ", end="")

for i in range(0,n):
    print(f"{vet[i]:.1f}", end=" ")

print(f"\nSOMA = {soma:.2f}")
print(f"MEDIA = {media:.2f}")