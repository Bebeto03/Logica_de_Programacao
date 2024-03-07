nome = input("Nome: ")

valorPorHora = float(input("Valor por hora: "))

horasTrabalhadas = int(input("Horas trabalhadas: "))

pagamento = valorPorHora * horasTrabalhadas

print(f"O pagamento para {nome} deve ser {pagamento:.2f}")