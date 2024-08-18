Algoritmo "Lista 03 - Exercício 11"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Solicita nome, idade e sexo (M/F) de algumas pessoas.
//               A cada solicitação pergunta se o usuário deseja continuar
//               a informar os dados. Caso não queira, apresenta a
//               média de idade das mulheres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 16/08/2024
Var
nome, sexo, parar: caractere
idade, cont_m, media, cont: inteiro

Inicio
// Entrada e Processamento
repita
      escreva("Qual seu nome? ")
      leia(nome)
      escreva("Qual sua idade? ")
      leia(idade)
      escreva("Insira seu sexo(M/F): ")
      leia(sexo)
      se sexo = "F" entao
         cont_m <- cont_m + 1
         media <- media + idade
      fimse
      escreva("Deseja continuar a informar os dados?(S/N) ")
      leia(parar)
      se parar = "N" entao
         cont <- 1
      fimse
ate cont = 1

// Saída
se cont_m > 0 entao
   escreva("A média de idade das mulheres é: ", media / cont_m:1)
fimse

Fimalgoritmo