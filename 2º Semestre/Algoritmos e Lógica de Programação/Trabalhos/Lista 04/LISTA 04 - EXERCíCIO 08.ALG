Algoritmo "Lista 04 - Exercício 08"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta do 3º ao 6º caracter.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere

Inicio
      // Entrada
      escreva("Digite uma palavra de no mínimo 10 caracteres: ")
      leia(palavra)
      
      // Processamento
      palavra <- copia(palavra;3;4)
      
      // Saída
      escreva("Os caracteres do 3º ao 6º são: ", palavra)

Fimalgoritmo