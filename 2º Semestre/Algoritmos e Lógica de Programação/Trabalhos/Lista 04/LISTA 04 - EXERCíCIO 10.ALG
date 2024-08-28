Algoritmo "Lista 04 - Exercício 10"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta
//               intercalando maiusculo e minusculo.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   cont: inteiro

Inicio
      // Entrada
      escreva("Digite uma palavra entre 5 e 20 caracteres: ")
      leia(palavra)
      
      // Processamento e Saída
      escreva("A palavra  intercalando maiúsculo e minúsculo é: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           se cont % 2 = 1 entao
              escreva(maiusc(letra))
           senao
                escreva(minusc(letra))
           fimse
      fimpara

Fimalgoritmo