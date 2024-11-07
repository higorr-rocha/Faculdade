Algoritmo "PROVA PRÁTICA - 2º SEMESTRE - ALGORITMOS"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Cria um vetor com 20 elementos distintos entre 10-105,
//               organiza-os em ordem crescente e permite verificar se um número
//               está no vetor, caso esteja, informa sua posição no vetor.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 06/11/2024

procedimento preencher
var
   i, j, valor, tmp: inteiro
   liberado: logico
inicio
   para i de 1 ate 20 faca
      liberado <- falso
      repita
         valor <- randi(95) + 10
         liberado <- verdadeiro
         para j de 1 ate i-1 faca
            se (num[j] = valor) entao
               liberado <- falso
            fimse
         fimpara
         se liberado entao
            num[i] <- valor
         fimse
      ate liberado
   fimpara
   para i de 1 ate 19 faca
        para j de i + 1 ate 20 faca
             se num[j] < num[i] entao
                tmp <- num[j]
                num[j] <- num[i]
                num[i] <- tmp
             fimse
        fimpara
   fimpara
fimprocedimento

funcao busca(valor, comeco, fim: inteiro): inteiro
var
   meio, p: inteiro
inicio
   p <- -1
   enquanto (comeco <= fim) e (p < 0) faca
      meio <- (comeco + fim) div 2
      se (valor = num[meio]) entao
         p <- meio
      senao
         se (valor < num[meio]) entao
            fim <- meio - 1
         senao
            comeco <- meio + 1
         fimse
      fimse
   fimenquanto
   retorne p
fimfuncao

Var
   num: vetor [1..20] de inteiro
   valor, resultado, i: inteiro
Inicio
   preencher
   repita
      escreva("Insira um valor entre 10 e 105 (0 para sair): ")
      leia(valor)
      resultado <- busca(valor, 1, 20)
      se resultado >= 1 entao
         escreval("Número encontrado na posição: ", resultado:1)
      senao
         escreval("Número não encontrado.")
      fimse
   ate (valor = 0)

Fimalgoritmo
