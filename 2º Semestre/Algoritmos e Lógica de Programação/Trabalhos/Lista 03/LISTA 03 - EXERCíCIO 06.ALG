Algoritmo "Lista 03 - Exercício 06"
// Disciplina  : [Algoritmos e Lógica de Programação]
// Professor   : Alexandre Moreno 
// Descrição   : Solicita o nome, idade e sexo de uma pessoa.
//               Valida o sexo entre M e F e a idade for entre 10 e 100 anos.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
nome, sexo: caractere
idade: inteiro

Inicio
// Entrada
escreva("Qual seu nome? ")
leia(nome)
escreva("Digite seu sexo (M/F): ")
leia(sexo)
escreva("Insira sua idade: ")
leia(idade)

// Processamento
se ((idade >= 10) e (<= 100)) e ((sexo = "M") ou (sexo = "F")) entao
   escreva("Dados válidos!")
 senao
      escreva("Dados inválidos!")
fimse

Fimalgoritmo