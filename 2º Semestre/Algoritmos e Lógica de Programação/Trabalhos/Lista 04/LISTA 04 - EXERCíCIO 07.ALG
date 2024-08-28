Algoritmo "Lista 04 - Exercício 07"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta o código ACII de cada vogal.
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
           escolha(letra)
                   caso "A","E","I","O","U","a","e","i","o","u"
                        escreval(letra," = ",asc(letra):1)
           fimescolha
      fimpara

Fimalgoritmo