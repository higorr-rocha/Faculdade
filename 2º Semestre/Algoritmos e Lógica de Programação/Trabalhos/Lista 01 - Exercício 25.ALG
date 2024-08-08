Algoritmo "Lista 01 - Exercício 25"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita três valores e apresenta a soma de 40% do 1º,
//               com 31% do 2º e 14% do 3º
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, num_3, soma:real

Inicio
// Entrada
escreva("Digite o primeiro número: ")
leia(num_1)
escreva("Digite o segundo número: ")
leia(num_2)
escreva("Digite o terceiro número: ")
leia(num_3)

// Processamento
num_1 <- num_1*0.46
num_2 <- num_2*0.31
num_3 <- num_3*0.14
soma <- num_1 + num_2 + num_3

// Saída
escreva("A soma de 40% do 1º, 31% do 2º e 14% do 3º é: ", soma:1:2)

Fimalgoritmo