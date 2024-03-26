m = int(input("Qual a quantidade de linhas da matriz? "))

n = int(input("Qual a quantidade de colunas da matriz? "))

mat = [[0 for x in range(n)] for x in range(m)]

for i in range (0,m):
    print(f"Digite os elementos da {i+1}a. linha:")
    for j in range(0,n):
        mat[i][j] = float(input())

vet = [0 for x in range(m)]

for i in range(0,m):
    for j in range(0,n):
        vet[i] += mat[i][j]

print("VETOR GERADO:")

for i in range(0,m):
    print(f"{vet[i]:.1f}")