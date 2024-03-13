x = int(input("Digite um numero inteiro: "))

while x!=0:
    soma = 0
    if x%2==0:
        soma = 5*x+20
    else:
        soma = 5*x+25
    print(f"SOMA = {soma}")
    x = int(input("Digite um numero inteiro: "))