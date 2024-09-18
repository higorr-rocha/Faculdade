Algoritmo "Lista 04 - Exercício 24"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Solicita a data de nascimento e apresenta por extenso.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   data, temp, mes_e: caractere
   dia, mes, ano: inteiro
   invalido: logico

Inicio
   // Entrada
   repita
      invalido <- falso
      escreva("Digite sua data de nascimento no formato (dd/mm/aaaa): ")
      leia(data)
      se (compr(data) = 10) entao
         temp <- copia(data;1;2)
         dia <- caracpnum(temp)
         temp <- copia(data;4;2)
         mes <- caracpnum(temp)
         temp <- copia(data;7;4)
         ano <- caracpnum(temp)
         se (dia < 1) ou (dia > 31) entao
            invalido <- verdadeiro
         senao
            se (mes < 1) ou (mes > 12) entao
               invalido <- verdadeiro
            senao
               se (ano < 1900) ou (ano > 2100) entao
                  invalido <- verdadeiro
               senao
                  se ((mes = 4) ou (mes = 6) ou (mes = 9) ou (mes = 11)) e (dia = 31) entao
                     invalido <- verdadeiro
                  senao
                     se (mes = 2) e (dia > 29) entao
                        invalido <- verdadeiro
                     senao
                        se (mes = 2) e (dia = 29) e (ano % 4 <> 0) entao
                           invalido <- verdadeiro
                        fimse
                     fimse
                  fimse
               fimse
            fimse
         fimse
      senao
         invalido <- verdadeiro
      fimse
   ate (nao invalido)

   // Escolha do mês por extenso
   escolha mes
   caso 1
      mes_e <- "Janeiro"
   caso 2
      mes_e <- "Fevereiro"
   caso 3
      mes_e <- "Março"
   caso 4
      mes_e <- "Abril"
   caso 5
      mes_e <- "Maio"
   caso 6
      mes_e <- "Junho"
   caso 7
      mes_e <- "Julho"
   caso 8
      mes_e <- "Agosto"
   caso 9
      mes_e <- "Setembro"
   caso 10
      mes_e <- "Outubro"
   caso 11
      mes_e <- "Novembro"
   caso 12
      mes_e <- "Dezembro"
   fimescolha

   // Saída
   escreva("Você nasceu em ", dia, " de ", mes_e, " de ", ano)

Fimalgoritmo
