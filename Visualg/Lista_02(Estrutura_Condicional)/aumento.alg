Algoritmo "aumento"

Var

   antigoSalario, novoSalario : real
   aumento : real
   porcentagem : inteiro

Inicio

      escreva("Digite o salario da pessoa: ")
      leia(antigoSalario)
      
      se antigoSalario<=1000.00 entao
         novoSalario <- antigoSalario + (antigoSalario/5)
         aumento <- novoSalario - antigoSalario
         porcentagem <- 20
      senao
           se antigoSalario<=3000.00 entao
              novoSalario <- antigoSalario + ((3*antigoSalario)/20)
              aumento <- novoSalario - antigoSalario
              porcentagem <- 15
           senao
                se antigoSalario <= 8000.00 entao
                   novoSalario <- antigoSalario + (antigoSalario/10)
                   aumento <- novoSalario - antigoSalario
                   porcentagem <- 10
                senao
                     novoSalario <- antigoSalario + (antigoSalario/20)
                     aumento <- novoSalario - antigoSalario
                     porcentagem <- 5
                fimse
           fimse
      fimse
      
      escreval("Novo salario = R$ ", novoSalario:4:2)
      escreval("Aumento = R$ ", aumento:4:2)
      escreva("Porcentagem = ", porcentagem, "%")

Fimalgoritmo