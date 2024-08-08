Algoritmo "Lista 01 - Exercício 14"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe dois números e entrega a décima parte da subtração
//               de um pelo outro, utilizando uma terceira variável.
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
num_1, num_2, resultado:real

Inicio
// Entrada
escreva("Insira o primeiro número: ")
leia(num_1)
escreva("Insira o segundo número: ")
leia(num_2)

// Processamento
resultado <- (num_1-num_2)/10

// Saída
escreva("O resultado da operação é: ", resultado:1:2)

Fimalgoritmo