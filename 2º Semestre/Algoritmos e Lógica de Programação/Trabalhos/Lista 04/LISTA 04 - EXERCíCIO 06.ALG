Algoritmo "Lista 04 - Exercício 06"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta o 3 últimos caracteres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere

Inicio
      // Entrada
      escreva("Digite uma palavra de no mínimo 10 caracteres: ")
      leia(palavra)
      
      //Processamento
      palavra <- copia(palavra;compr(palavra)- 2;3)
      
      // Saída
      escreva("Os três últimos caracteres são: ", palavra)

Fimalgoritmo