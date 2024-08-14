Algoritmo "Lista 01 - Exercício 28"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita dois valores e apresenta a soma de ambos com
//               desconto de 58%
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
soma <- soma - (soma*0.58)

// Saída
escreva("A soma de ambos com desconto de 58% é: ", soma:1:2)

Fimalgoritmo