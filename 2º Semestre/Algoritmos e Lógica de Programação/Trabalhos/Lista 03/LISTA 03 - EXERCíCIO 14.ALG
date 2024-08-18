Algoritmo "Lista 03 - Exercício 14"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   :  Solicita os dados de 12 pessoas e apresenta:
//                O percentual de homens, O nome e idade da pessoa mais jovem,
//                A média de idade das mulheres (sem filhos) e a quantidade de mulheres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 18/08/2024
Var
nome, sexo, nome_j: caractere
idade, idade_j, filhos, homens, mulheres, cont: inteiro
idade_sf, mulheres_sf: inteiro

Inicio
// Inicialização
cont <- 1

// Entrada e Processamento
repita
     escreva("Qual é seu nome? ")
      leia(nome)
     escreva("Qual sua idade? ")
      leia(idade)
       se cont = 1 entao
          nome_j <- nome
          idade_j <- idade
        senao
             se idade < idade_j entao
                nome_j <- nome
                idade_j <- idade
             fimse
       fimse
     escreva("Digite seu sexo(H/M): ")
      leia(sexo)
     escreva("Informe quantos filhos você tem: ")
      leia(filhos)
     se ((sexo = "H") ou (sexo = "M")) e (filhos >= 0) entao
        se sexo = "M" entao
           mulheres <- mulheres + 1
           se filhos = 0 entao
              mulheres_sf <- mulheres_sf + 1
              idade_sf <- idade_sf + idade
           fimse
         senao
              homens <- homens + 1
        fimse
      senao
           escreval("Dados Inválidos!")
           cont <- cont
     fimse
     cont <- cont + 1
ate cont = 12

// Saída
escreval("O percentual de homens foi de ",(homens/12)*100:1,"%")
escreval("A média de idade das mulheres sem filhos é de ",idade_sf/mulheres_sf:1:1)
escreval(nome_j," de ",idade_j:1," é a pessoa mais jovem.")
escreva("Foram entrevistadas ",mulheres:1," mulheres.")

Fimalgoritmo