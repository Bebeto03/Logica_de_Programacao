n = int(input("Deseja a tabuada para qual valor? "))

for i in range(0,10):
    res = n * (i+1)
    print(f"{n} x {i+1} = {res}")