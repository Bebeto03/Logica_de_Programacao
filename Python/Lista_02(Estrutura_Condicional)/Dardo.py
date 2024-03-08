print("Digite as tres distancias:")

dist1 = float(input())

dist2 = float(input())

dist3 = float(input())

if dist1>=dist2 and dist1>=dist3:
    distM = dist1
elif dist2>=dist1 and dist2>=dist3:
    distM = dist2
else:
    distM = dist3

print(f"MAIOR DISTANCIA = {distM:.2f}")