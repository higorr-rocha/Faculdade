Algoritmo "Lista 02 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita três números e informa qual é o maior e o menor.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
num_1, num_2, num_3:inteiro

Inicio
// Entrada
escreva("Digite o 1º número: ")
leia(num_1)
escreva("Digite o 2º número: ")
leia(num_2)
escreva("Digite o 3º número: ")
leia(num_3)

// Saída
se (num_1 > num_2) e (num_1 > num_3) entao
   escreval("O maior número é: ", num_1:1)
 senao
      se (num_2 > num_1) e (num_2 > num_3) entao
         escreval("O maior número é: ", num_2:1)
       senao
            escreval("O maior número é: ", num_3:1)
      fimse
fimse
se (num_1 < num_2) e (num_1 < num_3) entao
   escreva("O menor número é: ", num_1:1)
 senao
      se (num_2 < num_1) e (num_2 < num_3) entao
         escreva("O menor número é: ", num_2:1)
       senao
            escreva("O menor número é: ", num_3:1)
      fimse
fimse

Fimalgoritmo