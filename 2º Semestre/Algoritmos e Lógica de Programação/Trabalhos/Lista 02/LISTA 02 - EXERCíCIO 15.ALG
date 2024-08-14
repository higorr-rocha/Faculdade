Algoritmo "Lista 02 - Exercício 15"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita três nomes e informa qual é maior e qual é menor.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
nome_1, nome_2, nome_3:caractere

Inicio
// Entrada
escreva("Digite o 1º nome: ")
leia(nome_1)
escreva("Digite o 2º nome: ")
leia(nome_2)
escreva("Digite o 3º nome: ")
leia(nome_3)

// Saída
se (nome_1 > nome_2) e (nome_1 > nome_3) entao
   escreval("O maior nome é: ", nome_1)
 senao
      se (nome_2 > nome_1) e (nome_2 > nome_3) entao
         escreval("O maior nome é: ", nome_2)
       senao
            escreval("O maior nome é: ", nome_3)
      fimse
fimse
se (nome_1 < nome_2) e (nome_1 < nome_3) entao
   escreva("O menor nome é: ", nome_1)
 senao
      se (nome_2 < nome_1) e (nome_2 < nome_3) entao
         escreva("O menor nome é: ", nome_2)
       senao
            escreva("O menor nome é: ", nome_3)
      fimse
fimse

Fimalgoritmo