salario = float(input("Digite o salario da pessoa: "))

if salario<=1000.00:
    novoSalario = salario*1.2
    porcentagem = 20
elif salario<=3000.00:
    novoSalario = salario*1.15
    porcentagem = 15
elif salario<=8000.00:
    novoSalario = salario*1.1
    porcentagem = 10
else:
    novoSalario = salario*1.05
    porcentagem = 5

aumento = novoSalario-salario

print(f"Novo salario = R$ {novoSalario:.2f}")
print(f"Aumento = R$ {aumento:.2f}")
print(f"Porcentagem = {porcentagem} %")