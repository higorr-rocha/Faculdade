Algoritmo "Lista 01 - Exercício 24"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita dois valores e apresenta a soma de ambos com
//               acréscimo de 18%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, soma:real

Inicio
// Entrada
escreva("Digite o primeiro número: ")
leia(num_1)
escreva("Digite o segundo número: ")
leia(num_2)

// Processamento
soma <- num_1 + num_2
soma <- soma + (soma*0.18)

// Saída
escreva("A soma de ambos com acréscimo de 18% é: ", soma:1:2)

Fimalgoritmo