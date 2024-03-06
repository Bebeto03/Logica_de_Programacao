largura = float(input("Digite a largura do terreno: "))

comprimento = float(input("Digite o comprimento do terreno: "))

valorMetroQuadrado = float(input("Digite o valor do metro quadrado: "))

areaTerreno = comprimento * largura

precoTerreno = areaTerreno * valorMetroQuadrado

print(f"Area do terreno = {areaTerreno:.2f}")
print(f"Preco do terreno = {precoTerreno:.2f}")