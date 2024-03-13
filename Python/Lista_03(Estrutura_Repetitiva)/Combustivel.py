cod = input("Informe um codigo (1, 2, 3) ou 4 para parar: ")

alcool = 0
diesel = 0
gasolina = 0

while cod!='4':
    if cod=='1':
        alcool+=1
    elif cod=='2':
        gasolina +=1
    elif cod=='3':
        diesel+=1
    cod = input("Informe um codigo (1, 2, 3) ou 4 para parar: ")

print("MUITO OBRIGADO")
print(f"Alcool: {alcool}")
print(f"Gasolina: {gasolina}")
print(f"Diesel: {diesel}")