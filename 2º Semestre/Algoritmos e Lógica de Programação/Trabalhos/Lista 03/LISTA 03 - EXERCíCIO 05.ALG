Algoritmo "Lista 03 - Exercício 05"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Apresenta os números de 30 a 5 na tela.(Na mesma linha)
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num: inteiro

Inicio
// Entrada e Processamento
escreva("Número: ")
para num de 30 ate 5 passo -1 faca
      escreva(num:1)
      se num > 5 entao
         escreva(", ")
       senao
            escreva(".")
      fimse
      num <- num - 1
fimpara

Fimalgoritmo