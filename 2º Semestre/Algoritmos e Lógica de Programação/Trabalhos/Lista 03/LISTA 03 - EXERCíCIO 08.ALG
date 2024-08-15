Algoritmo "Lista 03 - Exercício 08"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Apresenta os números pares entre 5 e 50 na tela.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num: inteiro

Inicio
// Entrada e Processamento
num <- 5
escreva("Número: ")
repita
      se num % 2 = 0 entao
         escreva(num:1)
       se num < 50 entao
          escreva(", ")
        senao
             escreva(".")
       fimse
      fimse
      num <- num + 1
ate num > 50

Fimalgoritmo