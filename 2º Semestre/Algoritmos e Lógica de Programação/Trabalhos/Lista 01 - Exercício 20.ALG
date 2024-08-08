Algoritmo "Lista 01 - Exercício 20"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe cinco números e devolve a média ponderada deles
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, num_3, num_4, num_5, media:real

Inicio
// Entrada
escreva("Digita o Primeiro Número: ")
leia(num_1)
escreva("Digite o Segundo Número: ")
leia(num_2)
escreva("Digita o Terceiro Número: ")
leia(num_3)
escreva("Digite o Quarto Número: ")
leia(num_4)
escreva("Digita o Quinto Número: ")
leia(num_5)

// Processamento
media <- ((num_1*2)+(num_2*4)+(num_3*2)+(num_4*5)+(num_5*3))/16

// Saída
escreva("A média ponderada dos cinco números é: ",media:1:2)

Fimalgoritmo