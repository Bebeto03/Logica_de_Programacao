print("Digite dois numeros:")
x = int(input())
y = int(input())

soma = 0

if x>y:
    for i in range(y+1,x):
        if i%2!=0:
            soma += i
else:
    for i in range(x+1,y):
        if i%2!=0:
            soma += i

print(f"SOMA DOS IMPARES = {soma}")