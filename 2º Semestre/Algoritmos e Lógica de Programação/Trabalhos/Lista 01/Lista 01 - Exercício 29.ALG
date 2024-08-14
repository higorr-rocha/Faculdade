Algoritmo "Lista 01 - Exercício 29"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita dois valores e apresenta o resto da divisão da soma
//               de ambos por 3
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, soma:real

Inicio
// Entrada
escreva("Digite o primeiro número: ")
leia(num_1)
escreva("Digite o segundo número: ")
leia(num_2)

// Processamento
soma <- num_1 + num_2
soma <- soma % 3

// Saída
escreva("O resto da soma da divisão de ambos por 3 é: ", soma:1:2)

Fimalgoritmo