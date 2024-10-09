Algoritmo "Lista 05 - Exercício 03"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe um número e diz se é ou não primo.
// Autor(a)    : Higor Rocha
// Data atual  : 08/10/2024
Var
num: inteiro

funcao primo(p:inteiro): logico
var
   qd, x: inteiro
inicio
      qd <- 1
      x <- 1
      enquanto ((qd < 3) e (x < p)) faca
               x <- x + 1
               se (p % x = 0) entao
                  qd <- qd + 1
               fimse
      fimenquanto
      se (qd = 2) entao
         retorne verdadeiro
      senao
           retorne falso
      fimse
fimfuncao

Inicio
      escreva("Digite um número: ")
      leia(num)
      se (num = 1) entao
         escreva("Número Primo")
      senao
           se (primo(num)) entao
              escreva("Número Primo.")
           senao
                escreva("Não é Primo.")
           fimse
      fimse

Fimalgoritmo