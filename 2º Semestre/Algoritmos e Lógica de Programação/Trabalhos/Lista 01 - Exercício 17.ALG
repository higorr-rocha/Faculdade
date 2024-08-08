Algoritmo "Lista 01 - Exercício 17"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe nome e idade e entrega a média das idades
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
nome_1, nome_2, nome_3, nome_4: caractere
idade_1, idade_2, idade_3, idade_4, media: real

Inicio
// Entrada
escreva("Digite o Primeiro Nome: ")
leia(nome_1)
escreva("Digite o Segundo Nome: ")
leia(nome_2)
escreva("Digite o Terceiro Nome: ")
leia(nome_3)
escreva("Digite o Quarto Nome: ")
leia(nome_4)
escreva(nome_1, ", qual a sua idade? ")
leia(idade_1)
escreva(nome_2, ", qual a sua idade? ")
leia(idade_2)
escreva(nome_3, ", qual a sua idade? ")
leia(idade_3)
escreva(nome_4, ", qual a sua idade? ")
leia(idade_4)

// Processamento
media <- (idade_1+idade_2+idade_3+idade_4)/4

// Saída
escreva("A média das quatro idades é: ",media:1)

Fimalgoritmo