Algoritmo "Lista 02 - Exercício 08"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Recebe duas notas, quantidade de aulas e quantia de presenças.
//               Após informa se foi aprovado ou reprovado.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
nota_1, nota_2:real
aulas, presen:inteiro

Inicio
// Entrada
escreva("Informe sua primeira nota: ")
leia(nota_1)
escreva("Informe sua segunda nota: ")
leia(nota_2)
escreva("Informe a quantidade de aulas da disciplina: ")
leia(aulas)
escreva("Informe a sua quantidade de presenças na aula: ")
leia(presen)

// Saída
se ((nota_1+nota_2)/2 >= 6.0) e (presen >= aulas*0.75) entao
   escreva("Parabéns! Você foi aprovado.")
 senao
      escreva("Sinto Muito! Você foi reprovado.")
fimse

Fimalgoritmo