Algoritmo "Lista 04 - Exercício 04"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta o código ACII de cada letra.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   cont: inteiro

Inicio
      // Entrada
      escreva("Digite uma palavra: ")
      leia(palavra)
      
      // Processamento e Saída
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escreval(letra," = ",asc(letra))
      fimpara

Fimalgoritmo