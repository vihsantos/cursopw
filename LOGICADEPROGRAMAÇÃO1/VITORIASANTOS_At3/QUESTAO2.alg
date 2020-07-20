Algoritmo "QUESTAODOIS"

Var
   salariobruto, pis, cofins, csll, ir, iss, vliquido: real

Inicio

      escreva("Informe o valor do salario bruto: ")
      leia (salariobruto)
      
      pis<- salariobruto*0.0065
      cofins<- salariobruto*0,03
      csll<- salariobruto*0,01
      ir<- salariobruto*0,015
      iss<- salariobruto*0,05
      vliquido<- salariobruto - (pis+ cofins + csll + ir + iss)
      
      escreva("O valor liquido eh: ", vliquido)


Fimalgoritmo