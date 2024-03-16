n = int(input("Quantas pessoas voce vai digitar? "))

nome = [0 for x in range(n)]
idade = [0 for x in range(n)]

for i in range(0,n):
    print(f"Dados da {i+1}a pessoa:")
    nome[i] = input("Nome: ")
    idade[i] = int(input("Idade: "))

maisVelho =  nome[0]
id = idade[0]

for i in range(0,n):
    if idade[i]>id:
        id = idade[i]
        maisVelho = nome[i]

print(f"PESSOA MAIS VELHA: {maisVelho}")