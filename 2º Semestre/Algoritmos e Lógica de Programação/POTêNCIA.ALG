Algoritmo "Potência"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe um potência e faz o calculo dela.
// Autor(a)    : Higor Rocha
// Data atual  : 08/10/2024
Var
i: inteiro

funcao poten(base, expo:inteiro): inteiro
var
   x, num: inteiro
inicio
      num <- 1
      para x de 1 ate expo faca
         num <- num * base
      fimpara
      retorne num
fimfuncao

Inicio
para i de 0 ate 10 faca
     escreval("Resultado: ",poten(2,i):1)
fimpara

Fimalgoritmo