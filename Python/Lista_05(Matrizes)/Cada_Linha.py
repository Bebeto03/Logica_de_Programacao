n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0,n):
    for j in range(0,n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("NAIOR ELEMENTO DE CADA LINHA:")

for i in range(0,n):
    maior = mat[i][0]
    for j in range(0,n):
        if mat[i][j]>maior:
            maior = mat[i][j]
    print(maior)