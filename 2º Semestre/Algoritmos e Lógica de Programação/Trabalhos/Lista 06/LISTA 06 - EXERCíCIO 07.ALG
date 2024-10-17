Algoritmo "Lista 06 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num: vetor [1..5] de inteiro
   negativo, i: inteiro
Inicio
      negativo <- 0
      para i de 1 ate 5 faca
           escreva("Digite o ",i,"º Número: ")
           leia(num[i])
      fimpara
      para i de 1 ate 5 faca
           escreval("Número: ",num[i]:1)
      fimpara
      para i de 1 ate 5 faca
           se (num[i] < 0) entao
              negativo <- negativo + 1
           fimse
      fimpara
      escreva("Quantidade de números negativos: ",negativo)
Fimalgoritmo