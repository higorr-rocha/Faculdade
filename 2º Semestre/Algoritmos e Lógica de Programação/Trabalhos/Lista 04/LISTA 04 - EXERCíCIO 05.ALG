Algoritmo "Lista 04 - Exercício 05"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta o 4 primeiros caracteres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere

Inicio
      // Entrada
      escreva("Digite uma palavra de no mínimo 10 caracteres: ")
      leia(palavra)
      
      // Processamento
      palavra <- copia(palavra;1;4)
      
      // Saída
      escreva("Os quatro primeiros caracteres são: ", palavra)

Fimalgoritmo