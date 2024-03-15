n = int(input("Quantos valores vai ter cada vetor? "))

vetA = [0 for x in range(n)]
vetB = [0 for x in range(n)]
vetC = [0 for x in range(n)]

print("Digite os valores do vetor A:")
for i in range(0,n):
    vetA[i] = int(input())

print("Digite os valores do vetor B:")
for i in range(0,n):
    vetB[i] = int(input())

for i in range(0,n):
    vetC[i] = vetA[i] + vetB[i]

print("VETOR RESULTANTE:")
for i in range(0,n):
    print(vetC[i])