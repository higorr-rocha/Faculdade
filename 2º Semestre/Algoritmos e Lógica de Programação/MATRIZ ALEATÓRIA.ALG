Algoritmo "Matriz Aleatória com Busca"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/11/2024
Var
num: vetor [1..23,1..23] de caractere
palavra: caractere
frase: caractere
//--------------------------------------------------------------------------//
procedimento sorteiaMatriz
var
i,j: inteiro
inicio
    para i de 1 ate 23 faca
        para j de 1 ate 23 faca
             num[i,j] <- carac(randi(26) + 65)
        fimpara
   fimpara
fimprocedimento
//--------------------------------------------------------------------------//
procedimento mostraMatriz
var
i,j,k: inteiro
inicio
      k <- 0
      escreva("         ")
      para i de 1 ate 23 faca
           para j de 1 ate 23 faca
                escreva(num[i,j]," ")
           fimpara
           escreval("")
           se (i < 23) entao
              escreva("         ")
           fimse
      fimpara
fimprocedimento
//--------------------------------------------------------------------------//
funcao buscaPalavra (palavra: caractere): logico
var
p: logico
i, j: inteiro
inicio
    p <- falso
    i <- 1
    repita
          frase <- ""
          para j de 1 ate 23 faca
               frase <- frase + num[i,j]
          fimpara
          se (pos(palavra,frase) <> 0) entao
             p <- verdadeiro
          senao
               i <- i + 1
          fimse
    ate (i = 24) ou (p = verdadeiro)

    j <- 1
    enquanto (j < 24) e (p = falso) faca
          frase <- ""
          para i de 1 ate 23 faca
               frase <- frase + num[i,j]
          fimpara
          se (pos(palavra,frase) <> 0) entao
             p <- verdadeiro
          senao
               j <- j + 1
          fimse
    fimenquanto
    retorne p
fimfuncao
//--------------------------------------------------------------------------//
Inicio
  sorteiaMatriz
  mostraMatriz
  escreva("Qual palavra deseja buscar? ")
  leia(palavra)
  se (buscaPalavra(palavra)) entao
     escreva("A palavra foi encontrada.")
  senao
       escreva("Palavra Não Encontrada!")
  fimse

Fimalgoritmo