n = int(input("Quantos casos voce vai digitar? "))

for i in range(0,n):
    num = float(input("Entre com o numerador: "))
    den = float(input("Entre com o denominador: "))
    if den==0:
        print("DIVISAO IMPOSSIVEL")
    else:
        div = num/den
        print(f"DIVISAO = {div:.2f}")