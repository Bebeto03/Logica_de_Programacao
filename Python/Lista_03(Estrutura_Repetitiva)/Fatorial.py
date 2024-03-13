n = int(input("Digite o valor de N: "))

fat = 1

if n==0:
    print("FATORIAL = 1")
else:
    for i in range(n,0,-1):
        fat*=i
    print(f"FATORIAL = {fat}")