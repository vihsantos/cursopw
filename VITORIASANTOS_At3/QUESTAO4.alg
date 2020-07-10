Algoritmo "QUESTAOQUATRO"

Var
     salariobruto, salarioliquido, desconto: real

Inicio

      escreva ("Informe o salario bruto:")
      leia(salariobruto)
      
      se (salariobruto <= 1499.15) entao
              salarioliquido<- salariobruto
      senao
           se ((salariobruto > 1499.15) e (salariobruto <= 2246.75)) entao
              desconto <- salariobruto*0.075
              salarioliquido<- (salariobruto - desconto) - 112.43
           senao
                Se ((salariobruto > 2246.75) e (salariobruto <= 2995.70)) entao
                   desconto <- salariobruto*0.15
                   salarioliquido <- (salariobruto - desconto) - 280.94
                senao
                     se ((salariobruto > 2995.70)(salariobruto <= 3743.19)) entao
                        desconto <- salariobruto*0.225
                        salarioliquido <- (salariobruto - desconto) - 505.62
                     senao
                          se (salariobruto>3743.19) entao
                             desconto <- salariobruto*0.275
                             salarioliquido <- (salariobruto - desconto) - 692.78
                          fimse
                     fimse
                fimse
           fimse
      fimse
           
           escreva("O valor do salario liquido eh: ", salarioliquido)
                           
fimalgoritmo