Algoritmo "Lista 01 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Calcula o volume de um Cone.
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
r, h, vcn:real

Inicio
// Entrada
escreva("Informe o Valor de R: ")
leia(r)
escreva("Informe o Valor de H: ")
leia(h)

// Processamento
vcn <- ((r*r)*3.1416)/3

// Saída
escreva("O volume do cone é: ", vcn*h:1:2)

Fimalgoritmo