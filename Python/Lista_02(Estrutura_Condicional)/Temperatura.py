escala = input("Voce vai digitar a temperatura em qual escala(C/F)? ")

if escala == 'F':
    tempF = float(input("Digite a temperatura em Fahrenheit: "))
    tempC = 5*(tempF-32)/9
    print(f"Temperatura equivalente em Celsius: {tempC:.2f}")
elif escala == 'C':
    tempC = float(input("Digite a temperatura em Celsius: "))
    tempF = 9*tempC/5 + 32
    print(f"Temperatura equivalente em Farenheit: {tempF:.2f}")