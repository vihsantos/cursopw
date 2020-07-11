Algoritmo "QUESTAODOIS"

Var

num: inteiro
valor, menor1, menor2: real

Inicio

para num de 0 ate 3 passo 1 faca

    leia(valor)

menor1<1000000.99

menor2<1000000.99

     Se (num<menor1) entao

             Se (menor1<menor2)entao

                    menor1<-menor2

             fimse

             menor1<-num



     Se ((menor1<menor2)&&(num<>menor1) entao

          menor2=num

      fimse


fimalgoritmo