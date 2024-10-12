Algoritmo "Lista 05 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe a média de um aluno e informa seu conceito.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
cont: inteiro
//----------------------------------------------------------------------------
funcao fatorial (cont:inteiro): inteiro
var
   fato, i: inteiro
inicio
      i <- 1
      fato <- cont
      enquanto (i < cont) faca
           fato <- fato * (cont - i)
           i <- i + 1
      fimenquanto
      retorne fato
fimfuncao
//----------------------------------------------------------------------------
Inicio
      para cont de 0 ate 10 faca
           escreval("Fatorial de ",cont:1,": ",fatorial(cont):1)
      fimpara
Fimalgoritmo