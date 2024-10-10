Algoritmo "Lista 05 - Exercício 06"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe a média de um aluno e informa seu conceito.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   media: real
//----------------------------------------------------------------------------
funcao conceito (media:real): caractere
inicio
      se (media >= 0.0) e (media <= 4.9) entao
               retorne "D"
      senao
           se (media >= 5.0) e (media <= 6.9) entao
              retorne "C"
           senao
                se (media >= 7.0) e (media <= 8.9) entao
                   retorne "B"
                senao
                     se (media >= 9.0) e (media <= 10) entao
                        retorne "A"
                     fimse
                fimse
           fimse
      fimse
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite média do aluno: ")
      leia(media)
      escreva("Conceito: ", conceito(media))
Fimalgoritmo