x = float(input("Valor de X: "))

y = float(input("Valor de Y: "))

if x>0 and y>0:
    quadrante = "Q1"
elif x<0 and y>0:
    quadrante = "Q2"
elif x<0 and y<0:
    quadrante = "Q3"
elif x>0 and y<0:
    quadrante = "Q4"
elif x==0 and y!=0:
    quadrante = "Eixo Y"
elif x!=0 and y==0:
    quadrante = "Eixo X"
else:
    quadrante = "Origem"

print(quadrante)