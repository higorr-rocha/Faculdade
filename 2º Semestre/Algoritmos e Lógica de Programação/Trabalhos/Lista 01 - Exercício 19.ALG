Algoritmo "Lista 01 - Exercício 19"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe nome, idade, profissão e o salário de uma pessoa.
//               Apresenta todos os dados e desconta 1,3% de seu salário
//               para despesas de plano de saúde.
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome, profi: caractere
idade: inteiro
salario, desconto: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Digite sua idade: ")
leia(idade)
escreva("Qual sua profissão? ")
leia(profi)
escreva("Insira seu salário: ")
leia(salario)

// Processamento
desconto <- salario - (salario*0.0183)

// Saída
escreval("Caro ",nome,", de",idade," anos.")
escreval("Com a ocupação de: ",profi,".")
escreva("Seu salário com 1,83% de desconto é de: R$",desconto:1:2)

Fimalgoritmo