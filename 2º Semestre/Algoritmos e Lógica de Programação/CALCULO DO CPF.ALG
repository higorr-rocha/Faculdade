Algoritmo "Calculo do CPF"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe um CPF e informa se ele é válido.
// Autor(a)    : Higor Rocha
// Data atual  : 10/09/2024
Var
cpf, dig, temp:caractere
num, mult, soma, dig_1, dig_2, i, cont:inteiro
iguais:logico

Inicio
      // Entrada
      repita
        escreva("Informe seu CPF: ")
        leia(cpf)
        // Verifica se a entrada contém apenas números
        para i de 1 ate 11 faca
             temp <- copia(cpf,i,1)
             se ((temp >= "0") e (temp <= "9")) entao
                cont <- cont + 1
            senao
                 se ((compr(cpf) < 11) ou (compr(cpf) > 11)) entao
                    cont <- 12
            senao
                 cont <- 13
                 fimse
            fimse
        fimpara
        se (cont = 12) entao
               escreval("CPF Incorreto! Digite todos os 11 dígitos.")
        senao
             se (cont = 13) entao
                escreval("CPF Incorreto! Digite apenas Números.")
             fimse
        fimse
      ate (cont = 11)
      
      // Processamento PT. 1
      soma <- 0
      para i de 1 ate 9 faca
           dig <- copia(cpf,i,1)
           num <- caracpnum(dig)
           mult <- num * (11 - i)
           soma <- soma + mult
      fimpara
      dig_1 <- 11 - (soma % 11)
      
      // Processamento PT. 2
      soma <- 0
      para i de 1 ate 10 faca
           dig <- copia(cpf,i,1)
           num <- caracpnum(dig)
           mult <- num * (12 - i)
           soma <- soma + mult
      fimpara
      dig_2 <- 11 - (soma % 11)
      
      // Processamento PT. 3
      se (dig_1 > 9) entao
         dig_1 <- 0
      fimse
      se (dig_2 > 9) entao
         dig_2 <- 0
      fimse

      iguais <- verdadeiro
      dig <- copia(cpf,1,1)
      para i de 2 ate 11 faca
           se (dig <> copia(cpf,i,1)) entao
              iguais <- falso
           fimse
      fimpara
      
      // Saída
      se (iguais = verdadeiro) entao
         escreva("CPF Inválido.")
      senao
           se (numpcarac(dig_1) = copia(cpf,10,1)) e (numpcarac(dig_2) = copia(cpf,11,1)) entao
              escreva("CPF Válido.")
      senao
           escreva("CPF Inválido.")
           fimse
      fimse

Fimalgoritmo