n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0,n):
    for j in range(0,n):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

somaPositivos = 0

for i in range(0,n):
    for j in range(0,n):
        if mat[i][j]>0:
            somaPositivos+=mat[i][j]

print(f"\nSOMA DOS POSITIVOS: {somaPositivos:.1f}\n")

linha = int(input("Escolha uma linha: "))

print("LINHA ESCOLHIDA:", end=" ")

for j in range(0,n):
    print(f"{mat[linha][j]:.1f}", end=" ")

coluna = int(input("\n\nEscolha uma coluna: "))

print("COLUNA ESCOLHIDA:", end=" ")

for i in range(0,n):
    print(f"{mat[i][coluna]:.1f}", end=" ")

print("\n\nDIAGONAL PRINCIPAL:", end=" ")

for i in range(0,n):
    print(f"{mat[i][i]:.1f}", end=" ")

for i in range(0,n):
    for j in range(0,n):
        if mat[i][j]<0:
            mat[i][j] = mat[i][j]*mat[i][j]


print("\n\nMATRIZ ALTERADA:")

for i in range(0,n):
    for j in range(0,n):
        print(f"{mat[i][j]:.1f}", end=" ")
    print()