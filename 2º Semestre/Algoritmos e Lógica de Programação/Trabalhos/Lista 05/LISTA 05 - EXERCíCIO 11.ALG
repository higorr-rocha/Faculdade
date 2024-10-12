Algoritmo "Lista 05 - Exercício 11"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe uma senha e diz se é válida.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   senha: caractere
//----------------------------------------------------------------------------
funcao verificacao (senha:caractere): logico
var
   i: inteiro
   maius,minus,especial,num: logico
   c: caractere
inicio
      se (compr(senha) < 8) ou (compr(senha) > 12) entao
         retorne falso
      fimse
      para i de 1 ate compr(senha) faca
           c <- copia(senha,i,1)
           se (caracpnum(c) >= 0) e (caracpnum(c) <= 9) entao
              num <- verdadeiro
           fimse
           se (c = "!") ou (c = "@") ou (c = "#") ou (c = "$") ou (c = "%") ou (c = "&") ou (c = "*") ou (c = "?") ou (c = "+") ou (c = "-") entao
              especial <- verdadeiro
           fimse
           se (asc(c) >= 65) e (asc(c) <= 90) entao
              maius <- verdadeiro
           fimse
           se (asc(c) >= 97) e (asc(c) <= 122) entao
              minus <- verdadeiro
           fimse
      fimpara
      se (maius) e (minus) e (especial) e (num) entao
         retorne verdadeiro
      fimse
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite sua senha: ")
      leia(senha)
      se (verificacao(senha)) entao
         escreva("Senha Válida.")
      senao
           escreva("Senha Inválida.")
      fimse
Fimalgoritmo