Algoritmo "QUESTAOTRES"

Var
    salariobruto, desconto: real

Inicio

      escreva("Escreva o valor do salario bruto: ")
      leia(salariobruto)
      
      se (salariobruto <= 1693.72) entao
         desconto<-salariobruto*0.08
      senao
           se (salariobruto <= 2822.90 ) entao
               desconto<-salariobruto*0.09
           senao
               desconto<-salariobruto*0.11
           fimse
      fimse
      
      escreva("O valor do desconto do INSS eh: ", desconto)

Fimalgoritmo


