Algoritmo "Lista 04 - Exercício 11"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta ela invertida.
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
      escreva("A palavra invertida é: ")
      para cont de compr(palavra) ate 1 passo -1 faca
           letra <- copia(palavra;cont;1)
           escreva(letra)
      fimpara

Fimalgoritmo