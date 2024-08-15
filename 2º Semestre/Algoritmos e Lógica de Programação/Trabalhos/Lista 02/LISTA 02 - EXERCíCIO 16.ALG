Algoritmo "Lista 02 - Exercício 16"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita a pressão arterial e classifica.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
pres_s, pres_d:inteiro

Inicio
// Entrada
escreva("Insira sua pressão sistólica: ")
leia(pres_s)
escreva("Insira sua pressão distólica: ")
leia(pres_d)

// Saída
se (pres_s < 130) e (pres_d < 85) entao
   escreva("Sua pressão está normal!")
 senao
      se ((pres_s >= 130) e (pres_s <= 139) e (pres_d >= 85) e (pres_d <= 89)) entao
         escreva("Sua pressão está no limite!")
       senao
            se ((pres_s >= 140) e (pres_s <= 159) e (pres_d >= 90) e (pres_d <= 99)) entao
               escreva("Você está com Hipertensão Leve!")
             senao
                  se ((pres_s >= 160) e (pres_s <= 179) e (pres_d >= 100) e (pres_d <= 109)) entao
                     escreva("Você está com Hipertensão Moderada!")
                   senao
                        se (pres_s >= 180) e (pres_d >= 110) entao
                           escreva("Você está com Hipertensão Grave!")
 senao
      escreva("Você está com Hipertensão Sistólica Isolada!")
                        fimse
                  fimse
            fimse
      fimse
fimse

Fimalgoritmo