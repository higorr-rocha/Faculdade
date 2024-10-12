Algoritmo "Lista 05 - Exercício 12"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe uma string e verifica se ela só tem números.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   string: caractere
//----------------------------------------------------------------------------
funcao verificacao (seque:caractere): logico
var
   i: inteiro
   num: logico
   c: caractere
inicio
      para i de 1 ate compr(seque) faca
           c <- copia(seque,i,1)
           se (asc(c) < 48) ou (asc(c) > 57) entao
              num <- falso
           fimse
      fimpara
      retorne num
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite sua senha: ")
      leia(string)
      se (verificacao(string)) entao
         escreva("Possui apenas números.")
      senao
           escreva("Não possui apenas números.")
      fimse
Fimalgoritmo