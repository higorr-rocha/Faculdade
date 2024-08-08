Algoritmo "Lista 01 - Exercício 10"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Calcula o volume de uma Esfera.
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
r, vef:real

Inicio
// Entrada
escreva("Informe o Valor de R: ")
leia(r)

// Processamento
r <- r*r*r
vef <- ((4/3)*3.1416)*r

// Saída
escreva("O volume da esfera é: ", vef:1:2)

Fimalgoritmo