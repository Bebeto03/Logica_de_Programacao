Algoritmo "duracao"

Var

    segundos : inteiro
    minutos : inteiro
    horas : inteiro

Inicio

      escreva("Digite a duração em segundos: ")
      leia(segundos)
      
      horas <- segundos \ 3600
      
      minutos <- (segundos % 3600)\60
      
      segundos <- (segundos % 3600)%60
      
      escreva(horas, ":", minutos, ":", segundos)
      
Fimalgoritmo