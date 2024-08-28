Algoritmo "Lista 04 - Exercício 15"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta a quatidade de vogais.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   vogais, cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra: ")
      leia(palavra)
      
      // Processamento
      palavra <- maiusc(palavra)
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escolha(letra)
                   caso "A","E","I","O","U"
                        vogais <- vogais + 1
           fimescolha
      fimpara

      // Saída
      escreva("A quantidade de vogais é: ", vogais:1)

Fimalgoritmo