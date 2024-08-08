Algoritmo "Lista 01 - Exercício 01"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe nome e salário e entrega o salário com 28,5% de aumento
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
nome: caractere
salario, aumento: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva(nome,", insira seu salário: ")
leia(salario)

// Processamento
aumento <- salario + (salario*0.285)

// Saída
escreva(nome,", seu salário com 28,5% de aumento é: R$",aumento:1:2)

Fimalgoritmo