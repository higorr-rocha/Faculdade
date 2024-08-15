Algoritmo "Lista 03 - Exercício 10"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita 10 números, informa se é par ou ímpar e diz a média
//               de números ímpares.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num, quant, quant_im, cont: inteiro

Inicio
// Entrada e Processamento
para cont de 1 ate 10 faca
     escreva("Digite um número: ")
     leia(num)
     se num % 2 = 0 entao
        escreval("Par.")
      senao
           escreval("Ímpar.")
           quant_im <- quant_im + 1
     fimse
     quant <- quant + 1
fimpara

// Saída
escreva("A média dos números ímpares é: ", quant_im / 10:1:2)

Fimalgoritmo