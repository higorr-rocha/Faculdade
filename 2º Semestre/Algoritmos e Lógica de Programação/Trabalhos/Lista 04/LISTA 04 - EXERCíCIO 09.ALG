Algoritmo "Lista 04 - Exercício 09"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita uma palavra e apresenta
//               o caractere com maior valor ACII
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra, letra_m: caractere
   valor, valor_m, cont: inteiro

Inicio
      // Entrada
      escreva("Digite uma palavra: ")
      leia(palavra)
      
      // Processamento
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           valor <- asc(letra)
           se cont = 1 entao
              letra_m <- letra
              valor_m <- valor
           senao
                se valor > valor_m entao
                   letra_m <- letra
                   valor_m <- valor
                fimse
           fimse
      fimpara
      
      // Saída
      escreva("O caracter com o maior valor ASCII é: ", letra_m)

Fimalgoritmo