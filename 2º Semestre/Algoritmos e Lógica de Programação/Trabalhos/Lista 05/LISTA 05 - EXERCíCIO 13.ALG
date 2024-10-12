Algoritmo "Lista 05 - Exercício 13"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe diversos dados do aluno e informa se ele foi aprovado.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   ra,nome,disciplina: caractere
   carga,freq,nota_1,nota_2,sub: inteiro
   media: real
//----------------------------------------------------------------------------
funcao medias (num_1,num_2,sub:inteiro): real
var
   media: real
inicio
      media <- (num_1 + num_2) / 2
      se (media < 6.0) entao
         media <- sub
      fimse
      retorne media
fimfuncao
//----------------------------------------------------------------------------
procedimento aprovado (media:real;freq,carga:inteiro)
inicio
             se (media >= 6.0) e (freq > carga - (carga * 0.20)) entao
                escreva("Você foi Aprovado.")
             senao
                  escreva("Você foi Reprovado.")
             fimse
fimprocedimento
//----------------------------------------------------------------------------
Inicio
      escreva("Informe seu RA: ")
      leia(ra)
      escreva("Qual seu Nome? ")
      leia(nome)
      escreva("Qual a Disciplina? ")
      leia(disciplina)
      escreva("Qual a quantidade de aulas que você possui? ")
      leia(carga)
      escreva("Qual é a sua 1º Nota? ")
      leia(nota_1)
      escreva("Qual é a sua 2º Nota? ")
      leia(nota_2)
      escreva("Qual a sua nota da Sub? (Caso não tenha feito coloque 0)")
      leia(sub)
      escreva("Qual é a sua Frequência? ")
      leia(freq)
      media <- medias(nota_1,nota_2,sub)
      aprovado(media,freq,carga)
Fimalgoritmo