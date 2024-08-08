Algoritmo "Lista 01 - Exercício 08"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Calcula o volume de uma Pirâmide.
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
l, h, vpd:real

Inicio
// Entrada
escreva("Informe o Valor de L: ")
leia(l)
escreva("Informe o Valor de H: ")
leia(h)

// Processamento
vpd <- l*l
h <- h * (h/3)

// Saída
escreva("O volume da pirâmide é: ", vpd*h:1:2)

Fimalgoritmo