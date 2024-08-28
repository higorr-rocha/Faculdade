Algoritmo "Lista 04 - Exercício 12"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta ela linha a linha.
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
      escreval("A palavra é: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escreval(letra)
      fimpara

Fimalgoritmo