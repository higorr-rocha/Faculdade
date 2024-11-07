Algoritmo "Prova Prática - 06/11/2024"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Construir um algoritmo que preencha um vetor de 20 elementos com valores
// entre 10 e 105 (não repetidos). O algoritmo posteriormente deverá ficar
// em um laço de repetição perguntando ao usuário um valor (entre 10 e 105)
// e apresentando o índice do valor no vetor (caso encontrado) ou a
// mensagem "valor não localizado". A repetição deverá ser encerrada quando
// o usuário digitar 0 (zero) ao valor a ser pesquisado.
// Utilize um procedimento para preencher o vetor e uma
// função para fazer a busca, o restante ficará no programa principal.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 06/11/2024

procedimento preencher
var
   i, j, valor: inteiro
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
      escreva("Insira um valor entre 10 e 105: ")
      leia(valor)
      resultado <- busca(valor, 1, 20)
      se resultado >= 1 entao
         escreval("Número encontrado na posição: ", resultado:1)
      senao
         escreval("Número não encontrado.")
      fimse
      se valor = 0 entao
      escreval("Programa encerrado.")
      fimse
   ate (valor = 0)

Fimalgoritmo
