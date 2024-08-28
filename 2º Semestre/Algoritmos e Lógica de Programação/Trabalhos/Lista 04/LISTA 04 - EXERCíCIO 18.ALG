Algoritmo "Lista 04 - Exercício 18"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta linha a linha
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra de no mínimo 5 caracteres: ")
      leia(palavra)
      
      // Processamento e Saída
      escreval("A palavra é: ")
      para cont de 1 ate compr(palavra) faca
           escreval(copia(palavra; 1; cont))
      fimpara

Fimalgoritmo