Algoritmo "Lista 06 - Exercício 05"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num_1: vetor [1..8] de inteiro
   num_2: vetor [1..8] de inteiro
   i: inteiro
Inicio
      para i de 1 ate 8 faca
           escreva("Digite o ",i,"º Número: ")
           leia(num_1[i])
      fimpara
      para i de 8 ate 1 passo -1 faca
           escreva("Digite o ",i,"º Número: ")
           leia(num_2[i])
      fimpara
Fimalgoritmo