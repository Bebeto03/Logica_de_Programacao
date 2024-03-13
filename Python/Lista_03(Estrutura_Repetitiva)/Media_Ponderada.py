n = int(input("Quantos casos voce vai digitar? "))

for i in range(0,n):
    print("Digite tres numeros:")
    n1 = float(input())
    n2 = float(input())
    n3 = float(input())
    media = (2*n1+3*n2+5*n3)/10
    print(f"MEDIA = {media:.1f}")