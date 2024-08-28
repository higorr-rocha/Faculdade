Algoritmo "Lista 04 - Exercício 16"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta a palavra substituindo
//               as vogais por números.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra entre 5 e 15 caracteres: ")
      leia(palavra)
      
      // Processamento e Saída
      escreva("A palavra é: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escolha letra
                   caso "A"
                        escreva("1")
                   caso "E"
                        escreva("2")
                   caso "I"
                        escreva("3")
                   caso "O"
                        escreva("4")
                   caso "U"
                        escreva("5")
                   outrocaso
                            escreva(letra)
           fimescolha
      fimpara

Fimalgoritmo