n = int(input("Quantas pessoas serao digitadas? "))

altura = [0 for x in range(n)]
genero = [0 for x in range(n)]

for i in range(0,n):
    altura[i] = float(input(f"Altura da {i+1}a pessoa: "))
    genero[i] = input(f"Genero da {i+1}a pessoa: ")

menor = altura[0]
maior = altura[0]

for i in range(0,n):
    if altura[i]>maior:
        maior = altura[i]
    if altura[i]<menor:
        menor = altura[i]

print(f"Menor altura = {menor:.2f}")
print(f"Maior altura = {maior:.2f}")

somaM = 0
contF = 0
contM  = 0

for i in range(0,n):
    if genero[i] == 'F':
        somaM+=altura[i]
        contF+=1
    if genero[i] == 'M':
        contM+=1

mediaF = somaM/contF

print(f"Media das alturas das mulheres = {mediaF:.2f}")

print(f"Numero de homens = {contM}")