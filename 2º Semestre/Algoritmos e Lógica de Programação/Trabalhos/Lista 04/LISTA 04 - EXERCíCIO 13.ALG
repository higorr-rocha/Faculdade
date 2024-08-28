Algoritmo "Lista 04 - Exercício 13"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta ela invertida linha a linha.
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
      escreval("A palavra invertida é: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;compr(palavra)-(cont-1);1)
           escreval(letra)
      fimpara

Fimalgoritmo