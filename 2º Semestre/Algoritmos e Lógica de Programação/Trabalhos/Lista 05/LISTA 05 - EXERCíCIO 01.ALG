Algoritmo "Lista 05 - Exercício 01"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe um potência e faz o calculo dela.
// Autor(a)    : Higor Rocha
// Data atual  : 08/10/2024
Var
base, expo: inteiro
//----------------------------------------------------------------------------
funcao poten(base, expo:inteiro): inteiro
var
   x, num: inteiro
inicio
      num <- 1
      para x de 1 ate expo faca
         num <- num * base
      fimpara
      retorne num
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite a Base: ")
      leia(base)
      escreva("Digite o expoente: ")
      leia(expo)
      escreva("Resultado: ",poten(base,expo):1)

Fimalgoritmo