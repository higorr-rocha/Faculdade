Algoritmo "Lista 02 - Exercício 02"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicite um valor e informa se é positivo, negativo ou Zero.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
valor:inteiro

Inicio
// Entrada
escreva("Insira um valor: ")
leia(valor)

// Saída
se valor > 0 entao
   escreva("Esse valor é positivo!")
 senao
      se valor < 0 entao
         escreva("Esse valor é negativo!")
       senao
            se valor = 0 entao
               escreva("Esse valor é zero!")
            fimse
      fimse
fimse

Fimalgoritmo