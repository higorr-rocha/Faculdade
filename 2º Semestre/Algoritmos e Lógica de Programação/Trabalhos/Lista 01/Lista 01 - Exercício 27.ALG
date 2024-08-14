Algoritmo "Lista 01 - Exercício 27"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita o nome, idade, sexo e salário e apresenta o salário
//               com aumento de 24,5%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome, sexo: caractere
idade: inteiro
salario, aumento: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Qual sua idade? ")
leia(idade)
escreva("Qual seu sexo?(Use M,F ou O) ")
leia(sexo)
escreva("Insira seu salário: ")
leia(salario)

// Processamento
aumento <- salario + (salario*0.245)

// Saída
escreval("Prezado(a) ",nome,", de ",idade," anos.")
escreval("De sexo ",sexo)
escreva("Seu salário com 24,5% de aumento é de: R$",aumento:1:2)

Fimalgoritmo