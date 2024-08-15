Algoritmo "Lista 02 - Exercício 19"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita dois valores e informa a subtração e o
//               produto do maior pelo menor.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
num_1, num_2:inteiro

Inicio
// Entrada
escreva("Insira o 1º número: ")
leia(num_1)
escreva("Insira o 2º número: ")
leia(num_2)

// Saída
se num_1 > num_2 entao
   escreval("A subtração do maior pelo menor é: ",num_1-num_2:1)
   escreva("O produto do maior pelo menor é: ",num_1*num_2:1)
 senao
      escreval("A subtração do maior pelo menor é: ",num_2-num_1:1)
      escreva("O produto do maior pelo menor é: ",num_2*num_1:1)
fimse

Fimalgoritmo