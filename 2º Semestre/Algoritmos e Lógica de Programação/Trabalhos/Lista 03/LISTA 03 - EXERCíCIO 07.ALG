Algoritmo "Lista 03 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Solicita 15 números entre 10 e 50 e apresenta a média.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num, soma, cont: inteiro

Inicio
// Inicialização
cont <- 0

// Entrada e Processamento
repita
     escreva("Digite um número entre 15 e 50: ")
     leia(num)
     se (num >= 15) e (num <= 50) entao
        soma <- soma + num
        cont <- cont + 1
     senao
        escreval("Número inválido!")
     fimse
ate cont = 15

// Saída
escreva("A média dos números é: ", soma / 15:1:2)

Fimalgoritmo