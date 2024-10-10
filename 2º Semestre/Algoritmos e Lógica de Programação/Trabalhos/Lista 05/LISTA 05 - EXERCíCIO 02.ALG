Algoritmo "Lista 05 - Exercício 02"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe uma frase e mostra a quantidade de vogais e consoantes.
// Autor(a)    : Higor Rocha
// Data atual  : 08/10/2024
Var
frase: caracter
//----------------------------------------------------------------------------
funcao vogal(frase:caractere): inteiro
var
   x, quant: inteiro
   c: caracter
inicio
      quant <- 0
      para x de 1 ate compr(frase) faca
           c <- copia(frase,x,1)
           c <- maiusc(c)
           se (c = "A") ou (c = "E") ou (c = "I") ou (c = "O") ou (c = "U") entao
              quant <- quant + 1
           fimse
      fimpara
      retorne quant
fimfuncao
//----------------------------------------------------------------------------
funcao conso(frase:caractere): inteiro
var
   x, quant: inteiro
   c: caracter
inicio
      quant <- 0
      para x de 1 ate compr(frase) faca
           c <- copia(frase,x,1)
           c <- maiusc(c)
           se (asc(c) > 64) e (asc(c) < 91) e (c <> "A") e (c <> "E") e (c <> "I") e (c <> "O") e (c <> "U") entao
              quant <- quant + 1
           fimse
      fimpara
      retorne quant
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite uma frase entre 10 e 50 caracteres: ")
      leia(frase)
      escreval("Vogais: ",vogal(frase):1)
      escreval("Consoantes: ",conso(frase):1)
Fimalgoritmo