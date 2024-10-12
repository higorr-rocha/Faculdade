Algoritmo "Lista 05 - Exercício 09"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe um número real e apresenta a parte decimal.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   num: real
//----------------------------------------------------------------------------
procedimento decimal (VAR num: real)
inicio
      num <- num - int(num)
fimprocedimento
//----------------------------------------------------------------------------
Inicio
      escreva("Digite um número real: ")
      leia(num)
      decimal(num)
      escreva(num:1:2)
Fimalgoritmo