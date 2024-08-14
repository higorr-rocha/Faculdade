Algoritmo "Lista 01 - Exercício 26"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita o nome e o salário de uma pessoa e
//               apresenta o salário reduzido de 12,6%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome: caractere
salario, desconto: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Insira seu salário: ")
leia(salario)

// Processamento
desconto <- salario - (salario*0.126)

// Saída
escreval("Caro ",nome,", seu salário com 12,6% de desconto é de: R$",desconto:1:2)

Fimalgoritmo