n = int(input("Quantos numeros voce vai digitar? "))

dentro = 0
fora = 0

for i in range(0,n):
    x = int(input("Digite um numero inteiro: "))
    if(x<10 or x>20):
        dentro+=1
    else:
        fora+=1

print(f"{dentro} DENTRO")
print(f"{fora} FORA")