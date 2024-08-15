Algoritmo "Lista 02 - Exercício 18"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita o nome e o tipo sanguíneo de uma pessoa.
//               Informa para quais tipos ela pode doar e de quais pode receber.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
sangue:caractere

Inicio
// Entrada
escreva("Insira seu tipo sanguíneo: ")
leia(sangue)

// Saída
escolha sangue
        caso "A+"
             escreval("Pode doar para: AB+ e A+")
             escreva("Pode receber doação de: A+, A-, O+ e O-")
        caso "A-"
             escreval("Pode doar para: A+, A-, AB+ e AB-")
             escreva("Pode receber doação de: A- e O-")
        caso "B+"
             escreval("Pode doar para: B+ e AB+")
             escreva("Pode receber doação de: B+, B-, O+ e O-")
        caso "B-"
             escreval("Pode doar para: B+, B-, AB+ e AB-")
             escreva("Pode receber doação de: B- e O-")
        caso "AB+"
             escreval("Pode doar para: AB+")
             escreva("Pode receber doação de: Todos")
        caso "AB-"
             escreval("Pode doar para: AB+ e AB-")
             escreva("Pode receber doação de: A-, B-, O- e AB-")
        caso "O+"
             escreval("Pode doar para: A+, B+, O+ e AB+")
             escreva("Pode receber doação de: O+ e O-")
        caso "O-"
             escreval("Pode doar para: Todos")
             escreva("Pode receber doação de: O-")
        outrocaso
                 escreva("Tipo sanguíneo inválido!")
fimescolha

Fimalgoritmo