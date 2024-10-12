Algoritmo "Lista 05 - Exercício 08"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe A, B, C e entrega a a Raiz 1 e Raiz 2.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   a, b,c: inteiro
   raiz_1, raiz_2: real
//----------------------------------------------------------------------------
procedimento segundo_grau (a,b,c:inteiro;VAR r1,r2:real)
var
   delta: real
inicio
      delta <- (b*b)-(4*a*c)
      se (delta > 0) entao
         r1 <- (-b + raizq(delta)) / 2*a
         r2 <- (-b - raizq(delta)) / 2*a
         escreval("Raiz 1 = ",r1:1)
         escreval("Raiz 2 = ",r2:1)
      senao
           se (delta = 0) entao
              r1 <- (-b + raizq(delta)) / 2*a
              escreval("Raiz = ",r1:1)
           senao
                escreval("Não há resultado real para a equação.")
           fimse
      fimse
fimprocedimento
//----------------------------------------------------------------------------
Inicio
      escreva("Digite o valor de A: ")
      leia(a)
      escreva("Digite o valor de B: ")
      leia(b)
      escreva("Digite o valor de C: ")
      leia(c)
      segundo_grau(a,b,c,raiz_1,raiz_2)
Fimalgoritmo