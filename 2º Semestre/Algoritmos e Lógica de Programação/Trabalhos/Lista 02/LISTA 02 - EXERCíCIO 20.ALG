Algoritmo "Lista 02 - Exercício 20"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita 3 valores dos lados de um triângulo e classifica
//               entre triângulo equilátero, isósceles ou escaleno.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
valor_1, valor_2, valor_3: inteiro

Inicio
// Entrada
escreva("Digite o primeiro valor: ")
leia(valor_1)
escreva("Digite o segundo valor: ")
leia(valor_2)
escreva("Digite o terceiro valor: ")
leia(valor_3)

// Saída
se (valor_1 = valor_2) e (valor_2 = valor_3) entao
   escreva("Triângulo Equilátero.")
 senao
      se (valor_1 = valor_2) ou (valor_1 = valor_3) ou (valor_2 = valor_3) entao
         escreva("Triângulo Isósceles.")
       senao
            escreva("Triângulo Escaleno.")
      fimse
fimse

Fimalgoritmo