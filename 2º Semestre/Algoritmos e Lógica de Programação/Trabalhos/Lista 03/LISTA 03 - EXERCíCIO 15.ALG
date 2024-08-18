Algoritmo "Lista 03 - Exercício 15"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno
// Descrição   : Solicita a data de nascimento e informa o signo.
//               Após o signo, pergunta se o usuário deseja continuar.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 18/08/2024
Var
dia, mes: inteiro
continuar: caractere

Inicio
// Entrada e Processamento
repita

      escreva("Que dia você nasceu? ")
      leia(dia)
      escreva("Que mês você nasceu? ")
      leia(mes)
      se ((mes = 1) e (dia >= 21)) ou ((mes = 2) e (dia <= 19)) entao
         escreval("Seu signo é: Aquário.")
      senao
           se ((mes = 2) e (dia >= 20)) ou ((mes = 3) e (dia <= 20)) entao
              escreval("Seu signo é: Peixes.")
           senao
                se ((mes = 3) e (dia >= 21)) ou ((mes = 4) e (dia <= 20)) entao
                   escreval("Seu signo é: Áries.")
                senao
                     se ((mes = 4) e (dia >= 21)) ou ((mes = 5) e (dia <= 20)) entao
                        escreval("Seu signo é: Touro.")
                     senao
                          se ((mes = 5) e (dia >= 21)) ou ((mes = 6) e (dia <= 20)) entao
                             escreval("Seu signo é: Gêmeos.")
                          senao
                               se ((mes = 6) e (dia >= 21)) ou ((mes = 7) e (dia <= 21)) entao
                                  escreval("Seu signo é: Câncer.")
                               senao
                                    se ((mes = 7) e (dia >= 22)) ou ((mes = 8) e (dia <= 22)) entao
                                       escreval("Seu signo é: Leão.")
                                    senao
                                         se ((mes = 8) e (dia >= 23)) ou ((mes = 9) e (dia <= 22)) entao
                                            escreval("Seu signo é: Virgem.")
                                         senao
                                              se ((mes = 9) e (dia >= 23)) ou ((mes = 10) e (dia <= 22)) entao
                                                 escreval("Seu signo é: Libra.")
                                              senao
                                                   se ((mes = 10) e (dia >= 23)) ou ((mes = 11) e (dia <= 21)) entao
                                                      escreval("Seu signo é: Escorpião.")
                                                   senao
                                                        se ((mes = 11) e (dia >= 22)) ou ((mes = 12) e (dia <= 21)) entao
                                                           escreval("Seu signo é: Sagitário.")
                                                        senao
                                                             se ((mes = 12) e (dia >= 22)) ou ((mes = 1) e (dia <= 20)) entao
                                                                escreval("Seu signo é: Capricórnio.")
                                                             fimse
                                                        fimse
                                                   fimse
                                              fimse
                                         fimse
                                    fimse
                               fimse
                          fimse
                     fimse
                fimse
           fimse
      fimse
      escreva("Deseja continuar(S/N)? ")
      leia(continuar)
ate continuar = "N"

Fimalgoritmo