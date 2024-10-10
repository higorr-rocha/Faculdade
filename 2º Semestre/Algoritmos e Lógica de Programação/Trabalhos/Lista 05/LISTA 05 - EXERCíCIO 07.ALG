Algoritmo "Lista 05 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe a média de um aluno e informa seu conceito.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
//----------------------------------------------------------------------------
funcao fatorial: inteiro
var
   fato, i, cont: inteiro
inicio
      i <- 1
      para cont de 0 ate 10 faca
           enquanto (i < cont) faca
                    fato <- fato * (cont - i)
                    i <- i + 1
           fimenquanto
           retorne fato
      fimpara
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva(fato)
Fimalgoritmo