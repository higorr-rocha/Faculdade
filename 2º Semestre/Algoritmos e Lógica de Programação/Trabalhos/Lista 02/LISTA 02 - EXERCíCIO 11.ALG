Algoritmo "Lista 02 - Exercício 11"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita o ano e diz se é bissexto.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
ano:inteiro

Inicio
// Entrada
escreva("Insira um ano no formato de 4 dígitos: ")
leia(ano)

// Saída
se (ano % 4 = 0) e ((ano % 100 <> 0) ou (ano % 400 = 0)) entao
   escreva("O ano ", ano:1, " é bissexto.")
 senao
      escreva("O ano ", ano:1, " não é bissexto.")
fimse

Fimalgoritmo