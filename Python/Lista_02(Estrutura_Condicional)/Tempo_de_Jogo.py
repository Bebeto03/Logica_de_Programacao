horaInicial = int(input("Hora inicial: "))

horaFinal = int(input("Hora final: "))

if horaInicial>=horaFinal:
    horaFinal = horaFinal + 24

duracao = horaFinal-horaInicial

print(f"O JOGO DUROU {duracao} HORA(S)")