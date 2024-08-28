Algoritmo "Lista 04 - Exercício 19"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta linha a linha invertido.
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
      para cont de compr(palavra) ate 1 passo -1 faca
           escreval(copia(palavra; 1; cont))
      fimpara

Fimalgoritmo