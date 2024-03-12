print("Digite as idades:")
num = int(input())

soma = 0
cont = 0

while num>0:
    soma += num
    cont += 1
    num = int(input())

if cont==0:
    print("IMPOSSIVEL CALCULAR")
else:
    media = soma/cont
    print(f"MEDIA = {media:.2f}")