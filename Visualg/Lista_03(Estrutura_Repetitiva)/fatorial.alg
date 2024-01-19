Algoritmo "divisao"

Var

   n, i : inteiro
   fat : inteiro
   
Inicio

      escreva("Digite o valor de N: ")
      leia(n)
      
      fat <- 1
      
      se n=0 entao
         fat <- 1
      senao
           para i de 1 ate n faca
                fat <- fat * i
           fimpara
      fimse
      
      escreva("FATORIAL = ", fat)

Fimalgoritmo