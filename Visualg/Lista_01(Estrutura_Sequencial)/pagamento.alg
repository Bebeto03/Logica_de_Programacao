Algoritmo "pagamento"

Var

   nomeFuncionario : caractere
   valorPorHora : real
   horasTrabalhadas : real
   valorPagamento : real

Inicio

      escreva("Nome: ")
      leia(nomeFuncionario)
      
      escreva("Valor por hora: ")
      leia(valorPorHora)
      
      escreva("Horas trabalhadas: ")
      leia(horasTrabalhadas)
      
      valorPagamento <- valorPorHora * horasTrabalhadas
      
      escreva("O pagamento para ", nomeFuncionario, " deve ser ", valorPagamento:4:2)
      
Fimalgoritmo