Algoritmo "Lista 04 - Exercício 24"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita a data de nascimento e apresenta por extenso.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   data, dia, mes, ano, mes_e: caractere

Inicio
      // Entrada
      escreva("Digite sua data de nascimento no formato (dd/mm/aaaa): ")
      leia(data)
      se (compr(data) = 10) entao
         dia <- copia(data;1;2)
         mes <- copia(data;4;2)
         ano <- copia(data;7;4)
         escolha mes
                 caso "1"
                      mes_e <- "Janeiro"
                 caso "2"
                      mes_e <- "Fevereiro"
                 caso "3"
                      mes_e <- "Março"
                 caso "4"
                      mes_e <- "Abril"
                 caso "5"
                      mes_e <- "Maio"
                 caso "6"
                      mes_e <- "Junho"
                 caso "7"
                      mes_e <- "Julho"
                 caso "8"
                      mes_e <- "Agosto"
                 caso "9"
                      mes_e <- "Setembro"
                 caso "10"
                      mes_e <- "Outubro"
                 caso "11"
                      mes_e <- "Novembro"
                 caso "12"
                      mes_e <- "Dezembro"
         fimescolha
      fimse

      // Saída
      escreva("Você nasceu em ",dia," de ",mes_e," de ",ano)

Fimalgoritmo