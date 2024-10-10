Algoritmo "Lista 05 - Exercício 04"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe um número e diz se ele é ou não perfeito.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
num: inteiro
//----------------------------------------------------------------------------
funcao perfeito(num:inteiro): logico
var
       i, soma: inteiro
inicio
       soma <- 0
       para  i de 1 ate num - 1 faca
             se(num % i = 0) entao
                    soma <- soma + i
             fimse
       fimpara
       se(soma = num) entao
               retorne verdadeiro
       senao
            retorne falso
       fimse
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite um número inteiro: ")
      leia(num)
      se(perfeito(num)) entao
                        escreva("Número Perfeito")
      senao
           escreva("Não é um número perfeito.")
      fimse
Fimalgoritmo