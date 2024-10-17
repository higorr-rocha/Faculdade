Algoritmo "Lista 06 - Exercício 03"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num: vetor [1..7] de inteiro
   soma, i: inteiro
   media: real
Inicio
      soma <- 0
      para i de 1 ate 7 faca
           escreva("Digite a idade da ",i,"º Pessoa: ")
           leia(num[i])
      fimpara
      para i de 1 ate 7 faca
           soma <- soma + num[i]
      fimpara
      escreval("A média das idades das 7 pessoas é: ",soma/7:1:2)
      
Fimalgoritmo