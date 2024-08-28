Algoritmo "Lista 04 - Exercício 14"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Solicita uma frase e mostra a quantidade de espaços.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere
   espacos, cont: inteiro

Inicio
      // Inicializa o contador de espaços
      espacos <- 0

      // Entrada
      escreva("Digite uma frase de no mínimo 12 caracteres: ")
      leia(palavra)

      // Contagem de espaços
      para cont de 1 ate compr(palavra) faca
           se copia(palavra; cont; 1) = " " então
                espacos <- espacos + 1
           fimse
      fimpara

      // Saída
      escreva("A quantidade de espaços na palavra é: ", espacos:1)

Fimalgoritmo
